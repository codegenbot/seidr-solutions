def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) == min_diff or left_sum == right_sum:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index], vector[split_index:]