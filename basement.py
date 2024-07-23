def basement(arr):
    total = sum(arr[:1])
    if total < 0:
        return 1
    for i in range(1, len(arr)):
        total += arr[i]
        if total < 0:
            return i + 1
    return -1