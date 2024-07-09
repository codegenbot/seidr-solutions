```
def leaders(arr):
    leader = arr[-1]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leader:
            leader = arr[i]
    return [leader]