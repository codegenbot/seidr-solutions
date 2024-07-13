def smallest_change(arr):
    n = len(arr)
    arr.sort()
    changes = 0
    for i in range(1, n):
        if arr[i] != arr[0]:
            break
    else:
        return n - 1
    for i in range(n):
        while arr[i] != arr[0]:
            arr[i], arr[0] = arr[0], arr[i]
            changes += 1
    return changes