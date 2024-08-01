```
def smallest_change(arr):
    arr = sorted(set(arr))
    n = len(arr)
    changes = 0
    
    for i in range(n - 1):
        if arr[i] == arr[i + 1]:
            continue
        else:
            changes += abs(arr.index(arr[i]) - arr.index(arr[i + 1]))
    
    return changes