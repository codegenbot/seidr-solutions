```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            right = n - 1
            while right > left and arr[left] != arr[right]:
                right -= 1
            if arr[left] == arr[right]:
                changes += (right - left + 1)
                left = right + 1
            else:
                changes += 2
        else:
            left += 1
    
    return changes