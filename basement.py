def basement(arr):
    for i in range(1, len(arr)):
        if sum(arr[:i+1]) < 0:
            return i
    return -1