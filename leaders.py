def leaders(vector):
    result = []
    for i in range(len(vector)):
        max_right = max(vector[i + 1 :], default=vector[-1])
        if vector[i] >= max_right and all(x < max_right for x in vector[i + 1 :]):
            result.append(vector[i])
    return result