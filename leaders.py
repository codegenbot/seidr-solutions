def leaders(arr):
    leader = [arr[-1]]
    for i in range(len(arr)-1, 0, -1):
        if arr[i-1] >= leader[-1]:
            leader.insert(0, arr[i-1])
    return leader