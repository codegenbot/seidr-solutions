def leaders(arr):
    n = len(arr)
    leader = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leader.append(arr[i])

    return reversed(leader)