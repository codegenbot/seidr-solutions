def leaders(arr):
    if not arr:
        return []

    leader = max(arr)
    result = [leader]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leader:
            leader = arr[i]
            result.insert(0, leader)

    return result