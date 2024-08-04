```
def cut_vector(vector):
    n = len(vector)
    min_diff = float('inf')
    index = -1
    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            index = i
    left_vector, right_vector = vector[:index], vector[index:]
    return left_vector, right_vector