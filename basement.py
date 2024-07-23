def basement(arr):
    total = 0
    for i in range(len(arr)):
        if total > 0 and arr[i] < 0:
            return i + 1
        total += arr[i]
    return -1