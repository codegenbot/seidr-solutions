def basement(arr):
    for i, x in enumerate(arr):
        if sum(arr[:i+1]) < 0:
            return i
    return -1