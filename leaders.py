def leaders(v):
    result = []
    max_right = v[-1]
    for i in range(len(v) - 1, -1, -1):
        if v[i] >= max_right:
            result.append(v[i])
            max_right = v[i]
    return list(reversed(result))