def leaders(a):
    return [a[i] for i in range(len(a) - 1, -1, -1) if a[i] >= all(a[i + 1 :])]