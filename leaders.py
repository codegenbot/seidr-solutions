def leaders(v):
    v = list(reversed(v))
    return [v[0]] + [i for i in v[1:] if all(i >= j for j in v[v.index(i) + 1 :])]