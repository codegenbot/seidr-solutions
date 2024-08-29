def leaders(input_vector):
    return [input_vector[i] for i in range(len(input_vector)-1, -1, -1) if all(x <= input_vector[i] for x in input_vector[i+1:])]