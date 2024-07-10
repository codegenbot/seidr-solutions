def cut_vector(vector):
    total = sum(vector)
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total - left_sum
        diff = min(abs(left_sum - right_sum), abs(left_sum - total) + abs(right_sum))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]