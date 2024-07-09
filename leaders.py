def leaders(a):
    return [max(a[i:]) for i in range(len(a) - 1, -1, -1)]