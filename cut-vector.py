def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if (
            current_sum * 2 == total_sum
            or current_sum * 2 + num == total_sum * 2
            or current_sum * 2 - num == total_sum
        ):
            return vector[: i + 1], vector[i + 1 :]
    return vector[: i + 1], vector[i + 1 :]