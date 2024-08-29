```
def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []
    min_diff = float("inf")
    split_index = -1
    left_sum = right_sum = vector[0]
    for i in range(1, len(vector)):
        if sum(vector[:i]) <= sum(vector[i:]):
            left_sum = sum(vector[:i])
            right_sum = 0
        else:
            left_sum = 0
            right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return vector[:i+1], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    return vector[:split_index], vector[split_index:]