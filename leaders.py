def leaders(vector):
    result = []
    for i in range(len(vector)):
        max_left = max(vector[:i]) if i > 0 else 0
        max_right = max(vector[i + 1 :]) if len(vector) > i + 1 else 0
        if vector[i] >= max_left and vector[i] >= max_right:
            result.append(vector[i])
    return result