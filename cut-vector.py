def cut_vector(input_vector):
    total_sum = sum(input_vector)
    left_sum = 0
    for i in range(len(input_vector)):
        right_sum = total_sum - left_sum
        if left_sum == right_sum:
            return input_vector[: i + 1], input_vector[i:]
        elif abs(left_sum - right_sum) < min(abs(left_sum), abs(right_sum)):
            break
        left_sum += input_vector[i]
    return input_vector, [0]