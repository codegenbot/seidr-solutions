def leaders(arr):
    if len(arr) < 2:
        return [arr[-1]]
    leaders = []
    max_right = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    return list(reversed(leaders))