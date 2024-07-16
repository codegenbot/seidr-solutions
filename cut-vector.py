```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    left_sum = 0
    right_sum = sum(vector)

    for i in range(len(vector)):
        right_sum -= vector[i]

        if left_sum == right_sum:
            return vector[:i+1], vector[i:]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

        left_sum += vector[i]

    left_sum = 0
    for i in range(split_index):
        left_sum += vector[i]

    if left_sum <= sum(vector[split_index:]):
        return vector[:split_index], vector[split_index:]
    else:
        return vector[:split_index+1], vector[split_index:]