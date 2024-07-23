```
def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    split_index = -1

    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if abs(left_sum - right_sum) <= 1:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    if split_index != -1:
        return vector[:split_index], vector[split_index:]
    else:
        return [], []