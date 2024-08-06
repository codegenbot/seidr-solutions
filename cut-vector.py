def cut_vector(vector):
    n = len(vector)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(n):
        left_sum += vector[i]

        if i > 0:
            right_sum = sum(vector[:i])

            if right_sum == left_sum or abs(right_sum - left_sum) < min_diff:
                min_diff = abs(right_sum - left_sum)
                cut_index = i

    return (vector[:cut_index], vector[cut_index:])