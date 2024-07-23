```
def smallest_change(arr):
    n = len(arr)
    arr = [str(x) for x in arr]
    arr = ''.join(arr)
    
    i = j = 0
    changes = 0
    
    while i < n and j >= 0:
        if arr[i] == arr[j]:
            i += 1
            j -= 1
        else:
            j -= 1
            changes += 1
            
    return changes