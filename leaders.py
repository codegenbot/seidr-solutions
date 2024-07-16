def leaders(arr):
    leader = []
    max_right = 0
    for x in reversed(arr):
        if x >= max_right:
            leader.append(x)
        else:
            max_right = x
    return list(reversed(leader))