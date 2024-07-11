```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            mid = (left + right) // 2
            if arr[mid] == arr[right]:
                left += 1
            elif arr[mid] == arr[left]:
                right -= 1
            else:
                changes += 1
                break
        else:
            left += 1
            right -= 1
    
    return changes