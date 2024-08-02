def leaders(a):
    n = len(a)
    return [a[i] for i in range(n - 1, -1, -1) if a[i] >= max(a[i + 1 :])]