def leaders(arr):
    result = []
    max_leader = arr[-1]
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_leader:
            result.append(arr[i])
            max_leader = arr[i]
    return list(reversed(result))