def leaders(a):
    leaders = [a[-1]]
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= a[i + 1]:
            leaders.append(a[i])
    return reversed(leaders)