def leaders(arr):
    n = len(arr)
    leader_arr = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leader_arr.append(arr[i])

    return list(reversed(leader_arr))