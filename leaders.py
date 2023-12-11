def leaders(arr):
    result = []
    current_leader = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= current_leader:
            result.append(current_leader)
            current_leader = arr[i]
    result.append(current_leader)
    return result[::-1]