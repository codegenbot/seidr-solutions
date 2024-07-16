def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]

    for i in range(n-1, -1, -1):
        if i == n - 1 or arr[i] >= max(arr[i + 1:]):
            leaders.insert(0, arr[i])

    return leaders