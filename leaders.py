def leaders(vector):
    if len(vector) <= 1:
        return []
    result = [vector[0]]
    for i in range(len(vector)):
        max_right = max(vector[i + 1 :], default=vector[-1])
        if vector[i] >= max_right:
            result.append(vector[i])
    return result