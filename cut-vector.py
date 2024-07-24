def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    min_diff = float("inf")
    split_index = -1

    # Handle the edge case where difference is zero at the first index
    if abs(sum(vector[:1]) - sum(vector[1:])) < min_diff:
        min_diff = abs(sum(vector[:1]) - sum(vector[1:]))
        split_index = 0

    for i in range(1, len(vector) - 1):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))

        if diff < min_diff:
            min_diff = diff
            split_index = i

    # Handle the edge case where difference is zero at the last index
    if abs(sum(vector[:-1]) - sum(vector[-1:])) < min_diff:
        min_diff = abs(sum(vector[:-1]) - sum(vector[-1:]))
        split_index = len(vector) - 1

    return vector[:split_index + 1], vector[split_index:]