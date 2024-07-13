def leaders(v):
    v = list(v)
    result = [v[-1]]

    for i in range(len(v) - 2, -1, -1):
        if v[i] >= v[i + 1]:
            result.append(v[i])

    return reversed(result)