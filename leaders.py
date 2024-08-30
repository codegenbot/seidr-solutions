def leaders(v):
    return [
        v[i]
        for i in range(len(v) - 1, -1, -1)
        if all(v[i] >= v[j] for j in range(i + 1, len(v)))
    ]