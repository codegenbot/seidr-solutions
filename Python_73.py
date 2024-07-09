```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n-1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            arr[right + (left > right)] = arr[left]
            changes += 1
        else:
            left, right = left+1, right-1
    
    return changes