def cut_vector(v):
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(v)):
        left_sum = sum(v[:i])
        right_sum = sum(v[i:])

        if left_sum == right_sum:
            return v[:i], v[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    left_sum = sum(v[:cut_index])
    right_sum = sum(v[cut_index:])

    if left_sum == right_sum:
        return v[:cut_index], v[cut_index:]
    else:
        return v[:cut_index], v[cut_index:], [0]