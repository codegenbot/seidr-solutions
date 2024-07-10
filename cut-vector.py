def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff or (
            diff == min_diff
            and abs(len(vector) // 2 - i) < abs(len(vector) // 2 - (cut_index + 1))
        ):
            min_diff = diff
            cut_index = i + 1

    return vector[:cut_index], vector[cut_index:]