```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            mid = (left + right) // 2
            if arr[mid] > arr[left]:
                right = mid
            else:
                left = mid + 1
        else:
            left += 1
            right -= 1
    
    return changes