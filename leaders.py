def leaders(v):
    return [
        v[i] for i in range(len(v) - 1, -1, -1) if all(x <= v[i] for x in v[i + 1 :])
    ]