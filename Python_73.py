```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            if arr[right + 1] == arr[n - 1 - left]:
                right += 1
            else:
                changes += 1
        else:
            left += 1
        if right < left and arr[right] != arr[n - 1 - left]:
            changes += 1
        right += 1
    
    return changes