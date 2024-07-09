def cut_vector(vector):
    if len(vector) == 1: return [vector]
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    prev_left_sum = 0
    for i in range(len(vector)):
        right_sum = total_sum - (left_sum + vector[i])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            prev_left_sum = left_sum
        elif diff == min_diff and left_sum == right_sum:
            return [vector[:i], vector[i:]]
        left_sum += vector[i]
    if min_diff == 0:
        return [vector, []]
    return [vector[:len(vector) - (total_sum - prev_left_sum)], [total_sum - prev_left_sum]]