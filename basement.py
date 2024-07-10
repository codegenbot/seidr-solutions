def basement(arr):
    total = 0
    for i in range(len(arr)):
        if total < 0:
            return i
        total += arr[i]
    return -1