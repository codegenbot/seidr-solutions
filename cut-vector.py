def cut_vector(v):
    min_diff = float("inf")
    cut_index = -1
    for i in range(1, len(v)):
        left_sum = sum(v[:i])
        right_sum = sum(v[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return v[:cut_index], v[cut_index:]