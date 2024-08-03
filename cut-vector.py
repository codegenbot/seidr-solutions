def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    left = []
    right = []
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        total_left = sum(vector[:i])
        total_right = sum(vector[i:])

        if total_left == total_right:
            return [vector[:i]], [vector[i:]]

        diff = abs(total_left - total_right)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    left.append(vector[0])
    right.extend(vector[1:])

    return [left], [right]