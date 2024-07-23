```
def cut_vector(vector):
    n = len(vector)
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    if abs(left_sum - right_sum) <= 1:
        return vector[:1], vector[1:]
    elif abs(left_sum - right_sum) < float('inf'):
        min_diff = abs(left_sum - right_sum)
        split_index = 0

    for i in range(1, n):
        left_sum += -vector[i-1] + vector[i]
        right_sum = sum(vector[i:])

        if abs(left_sum - right_sum) <= 1:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index], vector[split_index:]