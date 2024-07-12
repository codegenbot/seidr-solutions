def cut_vector(vector):
    sorted_vector = sorted(vector)
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(sorted_vector)):
        left_sum = sum(sorted_vector[:i])
        right_sum = sum(sorted_vector[i:])
        diff = abs(left_sum - right_sum)
        if left_sum == right_sum:
            return [x for x in vector if x <= sorted_vector[i-1]], [x for x in vector if x > sorted_vector[i-1]]
        elif diff < min_diff:
            min_diff = diff
            split_index = i
    return [x for x in vector if x <= sorted_vector[split_index]], [x for x in vector if x > sorted_vector[split_index]]