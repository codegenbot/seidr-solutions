def cut_vector(vector):
    total_sum = sum(vector)
    for i in range(len(vector)):
        left_sum = 0
        for j in range(i+1):
            left_sum += vector[j]
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) <= abs(left_sum - (total_sum - left_sum)) or i == len(vector)-1:
            return [vector[:i+1], vector[i:]]
    return [vector, []]