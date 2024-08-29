def leaders(arr):
    max_r = arr[-1]
    leaders = [max_r]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_r:
            leaders.insert(0, arr[i])
            max_r = arr[i]
    return leaders