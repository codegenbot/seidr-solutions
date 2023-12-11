def leaders(vector):
    result = []
    current_max = -1
    for i in range(len(vector)-1, -1, -1):
        if vector[i] >= current_max:
            result.append(vector[i])
            current_max = vector[i]
    return result[::-1]