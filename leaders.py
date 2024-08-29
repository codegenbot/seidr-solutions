def leaders(a):
    n = len(a)
    return [a[i] for i in range(n) if all(x <= a[i] for x in a[i + 1 :])]