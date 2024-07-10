def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    min_split_index = -1

    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            min_split_index = i
        elif abs(left_sum - right_sum) == min_diff:
            min_split_index = i

        if left_sum >= total_sum // 2:
            return vector[:min_split_index], vector[min_split_index:]

    return vector[:min_split_index], vector[min_split_index:]