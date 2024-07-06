```
def smallest_change(arr):
    arr = sorted(arr)
    n = len(arr) - 1
    changes = 0
    
    for i in range(n):
        if arr[i] != arr[i+1]:
            changes += 1
    
    return changes