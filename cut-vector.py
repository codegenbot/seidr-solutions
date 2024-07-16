```
def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    min_diff = float('inf')
    min_left_index, min_right_index = -1, -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif diff < min_diff:
            min_diff = diff
            min_left_index, min_right_index = i-1, i
    return vector[:min_left_index+1], vector[min_right_index:]