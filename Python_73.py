```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            middle_index = (left + right) // 2
            if arr[middle_index] < arr[left]:
                right = middle_index
            elif arr[middle_index] > arr[right]:
                left = middle_index + 1
            else:
                right = middle_index
        else:
            left += 1
            right -= 1
    
    return changes