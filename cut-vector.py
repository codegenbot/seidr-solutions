```
def cut_vector(vector):
    left_sum = sum(vector)
    right_sum = 0
    for num in reversed(vector):
        right_sum += num
        if abs(left_sum - right_sum) <= 1:
            return vector[:vector.index(num+1)], vector[vector.index(num+1):]
    return [], vector