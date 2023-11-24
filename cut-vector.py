def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = vector[0]
    right_sum = total_sum - vector[0]
    min_diff = abs(left_sum - right_sum)
    cut_index = 0

    for i in range(1, n):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff == 0:
            return vector[:i+1], vector[i+1:]

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if min_diff > 0:
        for i in range(2, n):
            left_sum += vector[i-1]
            right_sum -= vector[i-1]
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                cut_index = i

    return vector[:cut_index+1], vector[cut_index+1:]