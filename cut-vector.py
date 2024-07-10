```
def cut_vector(vector):
    left_sum = right_sum = 0
    min_diff = float("inf")
    split_indices = []

    for i in range(len(vector)):
        if i > 0:
            left_sum += vector[i-1]
            right_sum -= vector[i]

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_indices = [i]

        elif abs(left_sum - right_sum) == min_diff:
            split_indices.append(i)

    return vector[:split_indices[0]], vector[split_indices[0]:]