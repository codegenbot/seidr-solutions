def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    max_left = arr[n - 1]

    for i in range(n - 2, -1, -1):
        if arr[i] >= max_left:
            leaders.insert(0, arr[i])
            max_left = arr[i]

    return leaders