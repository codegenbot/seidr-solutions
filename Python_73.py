```
def smallest_change(arr):
    left = 0
    right = len(arr) - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            while left < right and arr[left] != arr[right]:
                if arr[left] < arr[right]:
                    arr[left] = arr[right]
                else:
                    arr[right] = arr[left]
                changes += 1
            break
        left += 1
        right -= 1
    
    return changes