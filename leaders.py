def leaders(a):
    return [a[i] for i in reversed(range(len(a))) if all(a[i] >= a[j] for j in range(i+1, len(a)))]