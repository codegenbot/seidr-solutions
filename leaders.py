def leaders(arr):
    leader = []
    max_right = arr[-1]
    for x in reversed(arr):
        if x >= max_right:
            leader.append(x)
        else:
            max_right = x
    return leader[::-1]