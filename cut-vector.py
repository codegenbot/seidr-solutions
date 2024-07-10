def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []

    min_diff = float("inf")
    split_index = -1
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    for i in range(1, len(vector)):
        new_left_sum = sum(vector[:i])
        new_right_sum = sum(vector[i:])

        if new_left_sum == new_right_sum:
            return [vector[:i]], [vector[i:]]

        diff = abs(new_left_sum - new_right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    left_vector = vector[:split_index]
    right_vector = vector[split_index:]

    return [left_vector], [right_vector]