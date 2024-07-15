```
def cut_vector(vector):
    if len(vector) == 0:
        return None
    min_diff = float('inf')
    split_index = -1
    initial_left_sum = sum(vector[:1])
    initial_right_sum = sum(vector[1:])

    for i in range(1, len(vector)):
        left_sum = initial_left_sum + vector[i-1]
        right_sum = initial_right_sum - vector[i-1]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]