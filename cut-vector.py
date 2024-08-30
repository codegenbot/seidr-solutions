```
def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0
    left_sum = 0

    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
        left_sum += vector[i]

    return [vector[:split_index+1]], [vector[split_index:]]