def leaders(a):
    leaders = []
    max_right = a[-1]
    for i in range(len(a) - 1, -1, -1):
        if a[i] >= max_right:
            leaders.append(a[i])
            max_right = a[i]
    return leaders