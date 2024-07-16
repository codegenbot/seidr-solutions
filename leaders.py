def leaders(arr):
    n = len(arr)
    leaders = []

    for i in range(n-1, -1, -1):
        is_leader = True
        for j in range(i + 1, n):
            if arr[i] < arr[j]:
                is_leader = False
                break
        if is_leader:
            leaders.insert(0, arr[i])

    return leaders