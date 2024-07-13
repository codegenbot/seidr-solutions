```
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i, x in enumerate(vector):
        left_sum += x
        if (left_sum > total_sum // 2) or ((total_sum - left_sum) > total_sum // 2 and left_sum >= total_sum // 2):
            return [vector[:i], vector[i:]]