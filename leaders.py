def leaders(arr):
    result = []
    current_leader = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= current_leader or (arr[i] == current_leader and not result):
            result.append(current_leader)
            current_leader = arr[i]
    return result