def leaders(a):
    leaders = []
    min_right = a[-1]
    for i in range(len(a) - 1, -1, -1):
        if a[i] >= min_right:
            leaders.append(a[i])
        else:
            min_right = min(a[: i + 1])
    return reversed(leaders)