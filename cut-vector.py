```
def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    if vector[0] < (sum(vector[1:]) / (len(vector) - 1)):
        return [vector[:1]], [vector[1:]]
    
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    for i in range(1, len(vector)):
        left_sum += vector[i - 1]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return [vector[:split_index]], [vector[split_index:]]