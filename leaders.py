def leaders(vector):
    result = []
    for i in range(1, len(vector)):
        if vector[i] >= vector[-2]:
            result.append(vector[i])
    return result