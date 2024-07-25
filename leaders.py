def leaders(arr):
    n = len(arr)
    leader = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[-1]:
            leader.append(arr[i])
            last_leader = arr[i]
        else:
            leader.append(last_leader)

    return leader[::-1]