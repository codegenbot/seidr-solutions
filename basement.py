```
def basement(v):
    for i in range(1, len(v)):
        if sum(v[:i+1]) < 0:
            return i
    return -1