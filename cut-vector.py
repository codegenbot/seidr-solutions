def cut_vector(v):
    n = len(v)
    min_diff = float("inf")
    split_index = -1

    for i in range(1, n):
        left_sum = sum(v[:i])
        right_sum = sum(v[i:])

        if left_sum == right_sum:
            return v[:i], v[i:]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    if split_index != -1:
        return v[:split_index], v[split_index:]
    else:
        return [v[0]], v[1:]