def cut_vector(vector):
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index == 0:
        return [vector], [()]
    elif cut_index == len(vector) - 1:
        return ([], vector), (())
    else:
        left_half = vector[:cut_index]
        right_half = vector[cut_index:]

        return (left_half,), (right_half,)