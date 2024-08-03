def leaders(v):
    leaders = [v[i] for i in range(len(v) - 1, -1, -1)]
    return leaders