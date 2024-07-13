def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = -1
    for i in range(len(vector)):
        left_sum = total_sum - sum(vector[i:])
        right_sum = sum(vector[:i])
        diff = abs(left_sum - right_sum)
        if (
            left_sum == right_sum or left_sum == 0 or right_sum == 0
        ) and diff <= min_diff:
            if diff < min_diff:
                min_diff = diff
                split_index = i
    if min_diff == 0:
        return [[], vector]
    elif left_sum == 0:
        return [[vector[:split_index]], [vector[split_index:]]]
    elif right_sum == 0:
        return [[vector], [vector[:split_index], vector[split_index:]]]
    else:
        return [vector[:split_index], vector[split_index:]]