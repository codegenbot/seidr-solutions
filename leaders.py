def leaders(arr):
    leaders = [arr[-1]]
    max_right = arr[-1]
    for i in range(len(arr)-1, 0, -1):
        if arr[i-1] >= max_right:
            leaders.insert(0, arr[i-1])
            max_right = arr[i-1]
    return leaders