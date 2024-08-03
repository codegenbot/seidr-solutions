def leaders(v):
    leaders = [v[-1]]
    for i in range(len(v) - 2, -1, -1):
        if v[i] >= v[-1]:
            leaders.append(v[i])
            v.pop()
    return reversed(leaders)