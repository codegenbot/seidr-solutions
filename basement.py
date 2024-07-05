```
def basement(arr):
    total = 0
    for i, x in enumerate(arr):
        total += x
        if total < 0:
            continue
        elif total == 0:
            return i + 1 
    return -1