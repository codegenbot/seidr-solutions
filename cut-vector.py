```
def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if (left_sum == right_sum or diff < min_diff):
            min_diff = diff
            split_index = i

    return [vector[:split_index]], [vector[split_index:]]