def leaders(arr):
    n = len(arr)
    leader = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if leader[-1] <= arr[i]:
            leader.append(arr[i])

    return leader[::-1]