def cut_vector(vector):
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff and i-min_index < 5:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    return vector[:split_index], vector[split_index:]