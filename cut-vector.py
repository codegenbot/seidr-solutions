def cut_vector(vector):
    if len(vector) == 1: return [vector]
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
        elif diff == min_diff and left_sum == right_sum:
            return [vector[:i], vector[i:]]
        left_sum += vector[i]
    return [vector[0], vector[1:]]