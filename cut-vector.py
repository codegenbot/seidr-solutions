def cut_vector(vector):
    total_sum = sum(vector)
    
    min_diff = float("inf")
    split_index = 0

    left_sum = 0
    right_sum = total_sum

    for i in range(len(vector)):
        if left_sum == right_sum:
            return vector[:i+1], vector[i:]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

        left_sum += vector[i]
        right_sum -= vector[i]

    return vector[:split_index], vector[split_index:]