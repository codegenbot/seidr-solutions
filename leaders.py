def leaders(arr):
    max_right = 0
    leaders = []
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.insert(0, max_right)
    return leaders