def cut_vector(vector):
    if len(vector) <= 2:
        return vector[0], vector[0:] if len(vector) == 1 else vector[:1] + [vector[-1]]

    left = right = sum(vector)

    for i in range(1, len(vector)):
        left_diff = abs(left - sum(vector[:i]))
        right_diff = abs(right - sum(vector[i:]))

        if left_diff <= right_diff:
            return vector[:i], vector[i:]
        else:
            return vector[: i + 1], vector[i:]