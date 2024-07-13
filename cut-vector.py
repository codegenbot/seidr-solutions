def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:]+[0])  # Add this line
        diff = abs(left_sum - right_sum)
        if (diff < min_diff) or (diff == 0 and min_diff > 0):
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]