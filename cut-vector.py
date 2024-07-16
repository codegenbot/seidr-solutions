def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)

        if diff == 0:
            return vector[:i+1], vector[i:]
        elif diff < min_diff:
            min_diff = diff
            split_index = i

    left_sum = sum(vector[:split_index+1])
    right_sum = sum(vector[split_index:])

    return vector[:split_index+1], vector[split_index:]