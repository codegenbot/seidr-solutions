```
def smallest_change(arr):
    n = len(arr)
    arr.sort()
    changes = 0
    i, j = 1, n - 1
    
    while i < j:
        if arr[i] != arr[j]:
            changes += j - i
            j -= 1
        else:
            i += 1
            j -= 1
    
    return changes