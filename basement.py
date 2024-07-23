def basement(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            continue
        if total == 0:
            total = 0
        else:
            return i + 1
    return -1