def basement(arr):
    total = arr[0]
    for i in range(1, len(arr)):
        if total < 0:
            return i + 1
        total += arr[i]
    return -1