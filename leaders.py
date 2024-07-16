def leaders(a):
    leaders = [max(a[i:]) for i in range(len(a) - 1, -1, -1)]
    return leaders