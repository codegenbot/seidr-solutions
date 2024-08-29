def leaders(a):
    return [x for i, x in enumerate(reversed(a)) if all(x >= a[j] for j in range(i+1, len(a)))]