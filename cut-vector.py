def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    split_indices = []

    for i in range(len(vector)):
        right_sum = sum(vector[:i+1])
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_indices = [i]
        elif abs(left_sum - right_sum) == min_diff:
            split_indices.append(i)

        left_sum += vector[i]

    return vector[:split_indices[0]+1], vector[split_indices[0]:]