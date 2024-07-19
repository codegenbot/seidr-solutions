def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_avg = sum(vector[:i]) / i
        right_avg = sum(vector[i:]) / (len(vector) - i)

        if left_avg == right_avg:
            return vector[:i], vector[i:]
        elif abs(left_avg - right_avg) < min_diff:
            min_diff = abs(left_avg - right_avg)
            split_index = i

    return vector[:split_index], vector[split_index:]