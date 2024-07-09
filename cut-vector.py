def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    split_index = 0

    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if left_sum == right_sum:
            return vector[: i + 1], vector[i + 1 :]

        if (left_sum <= right_sum) and (diff < min_diff):
            min_diff = diff
            split_index = i

        left_sum += vector[i]

    return vector[:split_index], vector[split_index:]