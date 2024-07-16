```
def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    left_sum = 0
    for i in range(len(vector)):
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff or not min_diff:
            min_diff = diff
            min_left_index, min_right_index = i, i
        if left_sum == right_sum:
            return vector[:i+1], vector[i:]
        left_sum += vector[i]

    return vector[:min_left_index], vector[min_right_index:]