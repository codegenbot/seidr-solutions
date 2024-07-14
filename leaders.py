def leader(arr):
    n = len(arr)
    last_leader = arr[n - 1]
    leaders = [last_leader]

    for i in range(n - 2, -1, -1):
        if arr[i] >= last_leader:
            leaders.insert(0, arr[i])
            last_leader = arr[i]

    return leaders