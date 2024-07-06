def leaders(vector):
    max_value = -1
    result = []
    for i in range(len(vector)-1, -1, -1):
        if vector[i] >= max_value:
            max_value = vector[i]
            result.append(max_value)
    return result[::-1]