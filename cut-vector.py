def cut_vector(vector):
    total_sum = sum(vector)
    max_sum = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total_sum - left_sum

        if left_sum == right_sum:
            return vector[:i], vector[i:]

        if left_sum >= right_sum and left_sum > max_sum:
            max_sum = left_sum
            max_index = i

    return vector[:max_index], vector[max_index:]