def basement(arr):
    for i, x in enumerate((t := 0) for _ in arr):
        t += x
        if t < 0:
            return i + 1
    return -1