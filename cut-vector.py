def cut_vector(vector):
    sorted_vector = sorted(vector)
    left_sum = 0
    right_sum = sum(sorted_vector)

    for num in sorted_vector:
        left_sum += num
        if left_sum * 2 == right_sum:
            return (
                sorted_vector[: len(sorted_vector) // 2 + 1],
                sorted_vector[len(sorted_vector) // 2 :],
            )