def cut_vector(vector):
    total = sum(vector)
    min_diff = float('inf')
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = vector[0:i+1]
        right_sum = total - sum(left_sum)
        if abs(sum(left_sum) - right_sum) <= min_diff:
            min_diff = abs(sum(left_sum) - right_sum)
            split_index = i
    return [vector[:split_index], vector[split_index:]]