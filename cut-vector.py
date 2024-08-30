```
def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(vector[:1])

    for i in range(1, len(vector)):
        left_sum += vector[i - 1]
        right_sum = total_sum - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return [vector[:split_index]], [vector[split_index:]]