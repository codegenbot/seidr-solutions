def cut_vector(vector):
    vector_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum > vector_sum / 2:
            return vector[:i+1], vector[i+1:]