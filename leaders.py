def leaders(vector):
    if len(vector) == 1:
        return [vector[0]]
    result = []
    for i in range(len(vector)):
        max_right = max(vector[i + 1 :], default=vector[-1])
        if vector[i] >= max_right:
            result.append(vector[i])
    return result