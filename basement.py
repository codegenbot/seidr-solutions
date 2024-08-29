```
def basement(arr):
    for i in range(len(arr)):
        total = sum(arr[:i+1])
        if total < 0:
            return i+1
    return -1