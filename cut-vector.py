def cut_vector(vector):
    min_diff = float('inf')
    split_index = -1

    for i in range(len(vector)):
        left_sum = sum(vector[:i + 1])
        right_sum = sum(vector[i + 1:])

        if abs(left_sum - right_sum) < min_diff:
            while i + 1 < len(vector) and (left_sum == right_sum or abs(left_sum - right_sum) <= min_diff):
                i += 1
                left_sum += vector[i]
                right_sum = sum(vector[i + 1:])

            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index + 1], vector[split_index + 1:]