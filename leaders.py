Here is the solution:

def leaders(input_vector):
    if len(input_vector) == 1:
        return [input_vector[0]]
    else:
        result = []
        max_right = input_vector[-1]
        for i in range(len(input_vector)-2, -1, -1):
            if input_vector[i] >= max_right:
                max_right = input_vector[i]
                result.append(max_right)
        return list(reversed(result))