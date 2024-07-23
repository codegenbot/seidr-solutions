def basement(arr):
    total = arr[0]
    for i in range(1, len(arr)):
        total += arr[i]
        if total < 0:
            return i + 1
    return -1