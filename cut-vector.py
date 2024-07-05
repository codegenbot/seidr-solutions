```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(vector[:1])

    for i in range(1, len(vector)):
        right_sum = sum(vector[:i])

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

        left_sum += vector[i]

    return vector[:split_index], vector[split_index:], min_diff