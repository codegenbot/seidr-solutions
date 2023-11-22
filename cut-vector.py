def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_difference = total_sum
    cut_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        difference = abs(left_sum - right_sum)

        if difference < min_difference:
            min_difference = difference
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]