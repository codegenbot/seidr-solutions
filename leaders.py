def leaders(arr):
    n = len(arr)
    max_right = arr[n - 1]
    leaders = [max_right]

    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.insert(0, arr[i])
            max_right = arr[i]

    return leaders