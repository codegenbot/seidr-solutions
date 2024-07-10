Here is the Python code for the problem:

def leaders(input_vector):
    output_vector = [input_vector[-1]]
    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= input_vector[i+1]:
            output_vector.insert(0, input_vector[i])
    return output_vector