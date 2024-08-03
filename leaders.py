def leaders(vector):
    result = []
    max_right = vector[-1]
    for i in range(len(vector) - 1, -1, -1):
        if vector[i] >= max_right:
            result.append(vector[i])
            max_right = vector[i]
    return result[::-1]