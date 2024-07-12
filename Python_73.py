```
def smallest_change(arr):
    arr.sort()
    left = 0
    right = len(arr) - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            arr[left], arr[right] = arr[right], arr[left]
        else:
            left += 1
        right -= 1
    
    return changes