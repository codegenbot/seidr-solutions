def leaders(vector):
    result = []
    for i in range(len(vector)):
        max_right = max(vector[i+1:]) if len(vector) > i+1 else 0
        if vector[i] >= max_right:
            result.append(vector[i])
    return result