def leaders(arr):
    leader = []
    max_right = arr[-1]
    for x in reversed(arr):
        if x >= max_right:
            leader.append(x)
            max_right = x
    return list(reversed(leader))