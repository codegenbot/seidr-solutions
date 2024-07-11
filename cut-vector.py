def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    split_index = 0
    min_equal = False

    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            min_equal = True
            break
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    if not min_equal and min_diff > 0:
        for i in range(1, n):
            left_sum = sum(vector[:i])
            right_sum = sum(vector[i:])

            if abs(left_sum - right_sum) < min_diff:
                min_diff = abs(left_sum - right_sum)
                split_index = i

    return vector[:split_index], vector[split_index:]