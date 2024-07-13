```
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    for i in range(len(vector)):
        if i == 0:
            left_sum = vector[i]
        else:
            left_sum += vector[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return [vector[:split_index], vector[split_index:]]