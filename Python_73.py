```
def smallest_change(arr):
    arr.sort()
    changes = 0
    i = 1
    while i < len(arr):
        if arr[i] == arr[0]:
            i += 1
        else:
            changes += 1
            i += 1
    return changes