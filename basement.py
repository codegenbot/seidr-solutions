def basement(arr):
    total = 0
    index = -1
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i + 1
    return -1