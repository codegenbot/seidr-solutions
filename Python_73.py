```
def smallest_change(arr):
    arr.sort()
    n = len(arr)
    changes = 0
    i = 0
    
    while i < n - 1:
        if arr[i] == arr[i + 1]:
            i += 1
        else:
            changes += 1
            i += 2
    
    return changes