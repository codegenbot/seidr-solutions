def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        if left_sum != (total_sum - left_sum):
            diff = abs(left_sum - (total_sum - left_sum))
            if diff < min_diff:
                min_diff = diff
                split_index = i

        left_sum += vector[i]

    return vector[:split_index], vector[split_index:]