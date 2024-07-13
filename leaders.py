def leaders(a):
    leaders = [a[-1]]
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= a[-1]:
            leaders.insert(0, a[i])
            a.pop()
    return leaders