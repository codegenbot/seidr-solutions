def leaders(vector):
    n = len(vector)
    result = [vector[n - 1]]
    max_right = vector[n - 1]

    for i in range(n - 2, -1, -1):
        if vector[i] >= max_right:
            result.append(vector[i])
            max_right = vector[i]

    return list(reversed(result))