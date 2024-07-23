```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1

    for i in range(n-1):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])

        if abs(left_sum - right_sum) <= 1:
            return vector[:i+1], vector[i+1:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    if split_index != -1:
        return vector[:split_index+1], vector[split_index+1:]
    else:
        return [], []