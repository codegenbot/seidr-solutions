def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]

    for i in range(n-2, -1, -1):
        if arr[i] >= leaders[-1]:
            leaders.insert(0, arr[i])

    right_leader = arr[0]
    for i in range(1, n):
        if arr[i] < right_leader:
            break
        right_leader = arr[i]

    return leaders + [right_leader]