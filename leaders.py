def leaders(a):
    leader = [a[-1]]
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= leader[0]:
            leader.insert(0, a[i])
    return leader