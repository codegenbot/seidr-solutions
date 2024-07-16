def leaders(a):
    leaders = [a[i] for i in range(len(a) - 1, -1, -1) if a[i] >= min(a[i+1:])]
    return leaders