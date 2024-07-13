def leaders(arr):
    n = len(arr)
    max_so_far = arr[n - 1]
    leaders = [max_so_far]
    for i in range(n - 2, -1, -1):
        if arr[i] >= max_so_far:
            leaders.insert(0, arr[i])
            max_so_far = arr[i]
    return leaders