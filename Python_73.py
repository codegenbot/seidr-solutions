```
def smallest_change(arr):
    arr = list(set(arr))
    arr.sort()
    n = len(arr)
    changes = 0
    
    for i in range(n-1):
        if arr[i] == arr[i+1]:
            continue
        else:
            changes += 1
            
    return changes