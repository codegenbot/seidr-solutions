def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    smallest_difference = float("inf")
    left_index = 0
    right_index = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs(current_sum - (total_sum - current_sum))
        if diff <= smallest_difference:
            smallest_difference = diff
            left_index = i
            right_index = i + 1

    return vector[: left_index + 1], vector[right_index:]