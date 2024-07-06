```
def smallest_change(arr):
    n = len(arr)
    arr.sort()
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += (right - left) + 1
            break
        else:
            left += 1
            right -= 1
    
    return changes