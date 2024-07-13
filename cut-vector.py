def cut_vector(vector):
    min_sum = vector[0]
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i+1], vector[i:]

        diff = abs(left_sum - right_sum)
        if diff < min_sum and left_sum != right_sum:
            min_sum = diff
            split_index = i

    return vector[:split_index], vector[split_index:]