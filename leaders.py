def leaders(arr):
    n = len(arr)
    max_right = arr[n-1]
    leader = [max_right]
    for i in range(n-2, -1, -1):
        if arr[i] >= max_right:
            leader.insert(0, arr[i])
            max_right = arr[i]
    return leader