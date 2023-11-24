def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = total_sum
    cut_index = None

    for i in range(1, n):
        left_sum += vector[i - 1]
        right_sum -= vector[i - 1]
        diff = abs(left_sum - right_sum)

        if diff == 0:
            return vector[:i], vector[i:]

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if min_diff >= total_sum:
        for i in range(1, n):
            left_sum = sum(vector[:i])
            right_sum = sum(vector[i:])
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                cut_index = i

    if cut_index is None:
        cut_index = 0

    return vector[:cut_index], vector[cut_index:]