def leaders(a):
    n = len(a)
    leader = [a[i] for i in range(n - 1, -1, -1) if a[i] >= min(a[i + 1 :])]
    return leader