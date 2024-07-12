```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if i % 2 == 0:
            avg = (left_sum + right_sum) / 2
        else:
            avg = min(left_sum, right_sum)

        if left_sum == avg:
            return vector[:i], vector[i:]
        elif abs(left_sum - avg) < min_diff:
            min_diff = abs(left_sum - avg)
            split_index = i

    return vector[:split_index], vector[split_index:]