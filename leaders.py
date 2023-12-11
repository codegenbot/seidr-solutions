def leaders(vec):
    leaders = []
    for i in range(len(vec)):
        if vec[i] >= max(vec[i+1:]):
            leaders.append(vec[i])
    return leaders