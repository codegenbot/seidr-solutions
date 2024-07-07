def leaders(arr):
    leader = []
    max_right = max(arr)
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            leader.append(arr[i])
            max_right = arr[i]
    return leader[::-1]