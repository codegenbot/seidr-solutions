def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    left_sum = [0]
    for num in vector:
        left_sum.append(left_sum[-1] + num)
    
    min_diff = float('inf')
    min_left_index, min_right_index = -1, -1
    for i in range(1, len(vector)):
        right_sum = sum(vector[i:])
        diff = abs(left_sum[i-1] - right_sum)
        if diff < min_diff:
            min_diff = diff
            min_left_index, min_right_index = i-1, i
        elif diff == 0:
            return vector[:i], vector[i:]
    return vector[:min_left_index+1], vector[min_right_index:]