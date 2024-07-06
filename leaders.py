def leaders(vector):
    result = []
    for i in range(len(vector)):
        max_right = max(vector[i + 1 :] if i < len(vector) - 1 else [vector[-1]])
        if vector[i] >= max_right:
            result.append(vector[i])
    return result