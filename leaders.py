def leaders(vector):
    result = []
    for i in range(len(vector)):
        if vector[i] >= all(vector[i:]):
            result.append(vector[i])
    return result