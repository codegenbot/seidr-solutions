def cut_vector(vector):
    if len(vector) == 1: 
        return [vector]
    min_avg = float('inf')
    cut_index = -1  
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])
        avg = (left_sum + right_sum) / 2
        if abs(avg - left_sum) < min_avg:
            min_avg = abs(avg - left_sum)
            cut_index = i
    return [vector[:cut_index], vector[cut_index:]]