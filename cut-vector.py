def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)

    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = total_sum - left_sum

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < abs(total_sum // 2 - left_sum):
            return vector[:i], vector[i:]

    return vector, []