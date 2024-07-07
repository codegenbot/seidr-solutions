def cut_vector(vector):
    sorted_vector = sorted(vector)
    total_sum = sum(sorted_vector)

    if total_sum % 2 == 0:
        half_sum = total_sum // 2
        left_sum = right_sum = 0

        for num in sorted_vector:
            if left_sum <= half_sum:
                left_sum += num
            else:
                right_sum += num

        return (
            sorted_vector[: len(sorted_vector) // 2],
            sorted_vector[len(sorted_vector) // 2 :],
        )
    else:
        half_sum = (total_sum + 1) // 2
        left_sum = right_sum = 0

        for num in reversed(sorted_vector):
            if left_sum < half_sum:
                left_sum += num
            else:
                right_sum += num

        return [], sorted_vector[len(sorted_vector) // 2 :]