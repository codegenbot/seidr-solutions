def leaders(arr):
    if len(arr) < 2:
        return [arr[-1]]
    leaders = [arr[-1]]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= leaders[0]:
            leaders.insert(0, arr[i])
    return leaders