def leaders(arr):
    n = len(arr)
    max_seen = arr[n-1]
    leaders = [max_seen]

    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen:
            leaders.insert(0, arr[i])
            max_seen = arr[i]

    return leaders