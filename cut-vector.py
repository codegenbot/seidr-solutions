def cut_vector(vector):
    if sum(vector) % 2 == 0:
        return [vector[:len(vector)//2], vector[len(vector)//2:]]
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])
    diff = abs(left_sum - right_sum)
    min_diff = diff
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(sum(vector[i:]))
        new_diff = abs(left_sum - right_sum)
        if new_diff < min_diff:
            min_diff = new_diff
            split_index = i
    return vector[:split_index], vector[split_index:]