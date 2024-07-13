def cut_vector(vector):
    left = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(vector)):
        if vector[i] == vector[left]:
            return [vector[:i], vector[i:]]

        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i

    left_sum = sum(vector[:split_index])
    right_sum = sum(vector[split_index:])

    if left_sum == right_sum:
        return [vector[:split_index], vector[split_index:]]
    else:
        return [vector[: split_index + 1], vector[split_index + 1 :]]