def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= min(leaders):
            leaders.append(arr[i])

    return list(reversed(leaders))