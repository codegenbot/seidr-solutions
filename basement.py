def basement(arr):
    total = 0
    for i, num in enumerate(arr):
        if total < 0:
            return i
        total += num
    return -1