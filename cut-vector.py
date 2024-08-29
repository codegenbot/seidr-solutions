```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(len(vector)):
        if i == 0:  
            left_sum, right_sum = vector[i], sum(vector[1:])
        elif i == len(vector) - 1:  
            left_sum, right_sum = sum(vector[:i]), vector[i]
        else:
            left_sum = sum(vector[:i])
            right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]