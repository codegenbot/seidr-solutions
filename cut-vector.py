def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) < min_diff and (left_sum == right_sum or left_sum % 7 == right_sum % 7):
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index], vector[split_index:]