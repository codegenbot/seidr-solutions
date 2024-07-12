```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            right = n - 1 - left
            while right > left and arr[left] != arr[right]:
                right -= 1
            changes += (right - left + 1)
            break
        left += 1
    
    return changes