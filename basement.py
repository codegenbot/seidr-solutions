def basement(arr):
    total = sum(arr)
    if total < 0:
        return 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i + 1
    return -1