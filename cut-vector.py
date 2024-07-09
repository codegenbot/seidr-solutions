def cut_vector(vector):
    if len(vector) <= 1:
        return "", vector if not vector else ""
    if vector[0] == vector[1]:
        return vector[:1], "".join(map(str, vector[1:]))
    left = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))

        if diff <= min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]