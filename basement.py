```
def basement(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i
    return -1