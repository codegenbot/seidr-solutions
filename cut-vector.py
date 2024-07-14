def cut_vector(vector):
    n = len(vector)
    left_sum = sum(vector[: n // 2 + 1])
    right_sum = sum(vector[n // 2 :])
    if left_sum == right_sum:
        return vector[: n // 2 + 1], vector[n // 2 :]
    diff = abs(left_sum - right_sum)
    cut_index = n // 2
    for i in range(n // 2 + 1, n):
        new_left_sum = sum(vector[:i])
        new_right_sum = sum(vector[i:])
        if abs(new_left_sum - new_right_sum) < diff:
            diff = abs(new_left_sum - new_right_sum)
            cut_index = i
    return vector[:cut_index], vector[cut_index:]