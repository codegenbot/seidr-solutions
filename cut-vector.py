```Python
def cut_vector(vector):
    if len(vector) == 1:
        return [vector[0]], [vector[0]], [vector[0]]

    min_diff = float("inf")
    split_index = -1
    left_sum = 0
    right_sum = sum(vector)

    for i in range(1, len(vector)):
        left_sum += vector[i - 1]
        right_sum -= vector[i]

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index], vector[split_index:], [sum(vector) // len(vector)]