def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if i % 2 == 0:
            avg = (left_sum + right_sum) // 2
        else:
            avg = (left_sum + right_sum) / 2

        diff = abs(left_sum - avg)
        if left_sum == avg:
            return vector[:i], vector[i:]
        elif diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]