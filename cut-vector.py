def cut_vector(vector):
    min_diff = float("inf")
    split_indices = []

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_indices = [i]

        elif abs(left_sum - right_sum) == min_diff:
            split_indices.append(i)

    if min_diff != 0 and not split_indices:
        return vector[:len(vector)//2], vector[len(vector)//2:]
    else:
        return vector[:split_indices[0] + 1], vector[split_indices[-1] :]