def basement(arr):
    total = 0
    for i in range(len(arr)):
        total = total + arr[i]
        if total < 0:
            return i + 1
    return -1