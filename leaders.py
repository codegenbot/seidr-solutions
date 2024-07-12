def leaders(input_vector):
    return [input_vector[i] for i in range(len(input_vector)-1, -1, -1) if input_vector[i] >= max(input_vector[:i+1])]