```
def smallest_change(arr):
    n = len(arr)
    arr.sort()
    changes = 0
    i = j = 0
    
    while j < n:
        if arr[i] == arr[j]:
            i += 1
            j += 1
        else:
            changes += 1
            j += 1
    
    return changes