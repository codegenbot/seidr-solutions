def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    left_sum = vector[0]
    right_sum = sum(vector[1:])
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        return [vector[0]], vector[1:]

    return vector[:split_index], vector[split_index:]