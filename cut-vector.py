def cut_vector(vector):
    smallest_diff = float("inf")
    cut_index = 0

    for i in range(len(vector) - 1):
        diff = abs(sum(vector[: i + 1]) - sum(vector[i + 1 :]))
        if diff < smallest_diff:
            smallest_diff = diff
            cut_index = i

    subvector1 = vector[: cut_index + 1]
    subvector2 = vector[cut_index + 1 :]

    return subvector1, subvector2