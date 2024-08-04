```
def basement(indexes):
    total = 0
    for i, x in enumerate(indexes):
        if total < 0:
            return i
        total += x
    return -1