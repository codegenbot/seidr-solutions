```
def cut_vector(vector):
    total_sum = sum(vector)
    mid_sum = total_sum // 2

    if vector[0] >= mid_sum:
        return [vector[0]], vector[1:]

    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total_sum - left_sum

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_idx = i

    return vector[:split_idx], vector[split_idx:]