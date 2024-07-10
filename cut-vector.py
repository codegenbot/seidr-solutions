def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        if left_sum == right_sum:
            return (vector[: i + 1], vector[i:])
        elif abs(left_sum - right_sum) < min(abs(left_sum), abs(right_sum)):
            return (vector[: i + 1], vector[i:])
        left_sum += vector[i]
    return (vector, [])