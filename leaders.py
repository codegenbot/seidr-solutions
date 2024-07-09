def leaders(arr):
    leaders = [arr[-1]]
    max_left = arr[0]
    for i in range(1, len(arr)):
        if arr[i] >= max_left:
            leaders.insert(0, arr[i])
            max_left = arr[i]
    return leaders