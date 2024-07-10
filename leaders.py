def leaders(a):
    n = len(a)
    return [a[i] for i in range(n - 1, -1, -1) if all(x <= a[i] for x in a[i + 1 :])]