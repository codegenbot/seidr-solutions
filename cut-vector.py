```
def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector)
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        new_left_sum = left_sum + vector[i]
        new_right_sum = right_sum - vector[i]

        diff = abs(new_left_sum - new_right_sum)

        if diff <= min_diff:
            min_diff = diff
            split_index = i

        left_sum += vector[i]
        right_sum -= vector[i]

    if abs(left_sum - right_sum) <= min_diff:
        return [vector[:len(vector)//2+1], vector[len(vector)//2:]]
    
    return vector[: split_index + 1], vector[split_index + 1 :]