def leaders(v):
    leaders_list = [v[-1]]
    for i in range(len(v) - 2, -1, -1):
        if v[i] >= v[i + 1]:
            leaders_list.append(v[i])
    return list(reversed(leaders_list))