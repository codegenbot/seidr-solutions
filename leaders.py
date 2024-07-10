def leaders(a):
    return [a[i] for i in reversed(range(len(a))) if all(x <= a[i] for x in a[:i])]