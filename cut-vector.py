def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return (vector[:i], vector[i:]), (0, 0)
        else:
            diff = abs(left_sum - right_sum)

            if diff < min_diff:
                min_diff = diff
                cut_index = i

    return (vector[:cut_index], vector[cut_index:]), (min_diff, 0)