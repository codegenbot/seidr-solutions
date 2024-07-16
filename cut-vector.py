def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    min_diff = float('inf')
    left_sum = right_sum = 0
    for i in range(len(vector)):
        if i == 0:
            right_sum = sum(vector[1:])
        elif i == len(vector)-1:
            left_sum = sum(vector[:-1])
        else:
            left_sum += vector[i-1]
            right_sum -= vector[i]
        if abs(left_sum - right_sum) < min_diff:
            min_left_index, min_right_index = i, i+1
            min_diff = abs(left_sum - right_sum)

    return vector[:min_left_index], vector[min_right_index:]