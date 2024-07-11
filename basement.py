def basement(arr):
    total = 0 if arr[0] > 0 else arr[0]
    for i in range(1, len(arr)):
        total += arr[i]
        if total < 0:
            return i + 1
    return -1