def smallest_change(arr):
    if not isinstance(arr, list) or not all(isinstance(x, int) for x in arr):
        return "Invalid Input"

    n = len(arr)
    arr.sort()
    changes = 0
    for i in range(1, n):
        if arr[i] != arr[0]:
            break
    else:
        return str(n - 1)

    for i in range(n):
        while arr[i] != arr[0]:
            arr[i], arr[0] = arr[0], arr[i]
            changes += 1

    return str(changes)