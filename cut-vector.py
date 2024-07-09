def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) <= total_sum / 2 and (left_sum == right_sum or left_sum % 2 == right_sum % 2):
            return vector[:i], vector[i:]
    return vector[:split_index], vector[split_index:]