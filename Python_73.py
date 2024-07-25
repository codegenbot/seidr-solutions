```
def smallest_change(arr):
    arr.sort()
    changes = 0
    for i in range(1, len(arr)):
        if arr[i] != arr[i-1]:
            changes += 1
    return changes