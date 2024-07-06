def smallest_change(arr):
    arr = list(set(arr))
    arr.sort()
    changes = 0
    for i in range(1, len(arr)):
        if arr[i - 1] != arr[i]:
            changes += 1
    return changes