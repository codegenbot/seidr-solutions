def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    if split_index != -1:
        return vector[:split_index], vector[split_index:]
    else:
        left_sum = sum(vector[:-1])
        right_sum = sum([vector[-1]])

        if left_sum == right_sum:
            return vector, []
        elif abs(left_sum - right_sum) < min_diff:
            return vector[:-1], [vector[-1]]
        else:
            return [], vector