def leaders(arr):
    n = len(arr)
    max_r = arr[n-1]
    leaders = [max_r]

    for i in range(n-2, -1, -1):
        if arr[i] >= max_r:
            max_r = arr[i]
            leaders.insert(0, max_r)

    return leaders