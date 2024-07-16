def leaders(arr):
    last_leader = arr[-1]
    result = [last_leader]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= last_leader:
            last_leader = arr[i]
            result.append(last_leader)
    return result