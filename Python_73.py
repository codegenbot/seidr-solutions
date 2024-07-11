def smallest_change(arr):
    arr.sort()
    changes = 0
    for i in range(len(arr) - 1):
        if arr[i] != arr[i + 1]:
            changes += 1
    return changes