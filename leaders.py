def leaders(a):
    leader = [a[i] for i in range(len(a) - 1, -1, -1)]
    return [max(a[:i+1]) for i in range(len(leader))]