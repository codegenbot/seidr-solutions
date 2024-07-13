def cut_vector(vector):
    n = len(vector)
    sorted_vector = sorted(vector)
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, n):
        left_sum = sum(sorted_vector[:i])
        right_sum = sum(sorted_vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    if cut_index != -1:
        return vector[:cut_index], vector[cut_index:]
    else:
        return None