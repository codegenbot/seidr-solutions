def leaders(vector):
    result = []
    for i in range(len(vector)):
        if vector[i] >= max(vector[i+1:]):
            result.append(vector[i])
        elif vector[i] < min(vector[:i]):
            result.append(vector[i])
    return result