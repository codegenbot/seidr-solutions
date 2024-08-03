def leaders(vector):
    n = len(vector)
    result = [vector[n - 1]]

    for i in range(n - 2, -1, -1):
        if vector[i] >= vector[i + 1]:
            result.append(vector[i])

    return result[::-1]