Here is the solution:

def leaders(input_vector):
    result = []
    max_right = input_vector[-1]
    for i in range(len(input_vector) - 1, -1, -1):
        if input_vector[i] >= max_right:
            result.append(input_vector[i])
            max_right = input_vector[i]
    return list(reversed(result))