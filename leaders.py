def leaders(vector):
    result = []
    for i in range(len(vector)):
        max_right = max(vector[i+1:], default=vector[-1])
        if vector[i] >= max_right and max_right == vector[i]:
            result.append(vector[i])
    return result