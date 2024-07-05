```
def basement(arr):
    total = 0
    for i, n in enumerate(arr):
        total += n
        if total < 0:
            return i
    return -1