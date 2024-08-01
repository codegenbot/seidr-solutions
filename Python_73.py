```
def smallest_change(arr):
    arr.sort()
    changes = 0
    i = 0
    while i < len(arr) - 1:
        if arr[i] == arr[i+1]:
            i += 1
        else:
            changes += 1
            i += 1
    return changes