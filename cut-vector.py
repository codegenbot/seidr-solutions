def cut_vector(vector):
    vector_sum = sum(vector[:len(vector)//2])
    current_sum = 0
    min_diff = float('inf')
    index = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs(current_sum - vector_sum)
        if diff < min_diff:
            min_diff = diff
            index = i
    return vector[:index], vector[index:]