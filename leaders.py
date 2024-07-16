def leaders(arr):
    leader = [arr[-1]]
    max_right = arr[-1]
    for x in reversed(range(len(arr)-1)):
        if arr[x] >= max_right:
            leader.insert(0, arr[x])
        else:
            max_right = arr[x]
    return leader