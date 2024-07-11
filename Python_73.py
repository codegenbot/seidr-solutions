```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            changes += 1
            if arr[left] == arr[n - 1 - right]:
                right += 1
            else:
                right = 0
        else:
            right += 1
        left += 1
    
    return changes + min(right, n - 1 - right)