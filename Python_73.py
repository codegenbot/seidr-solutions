```
def smallest_change(arr):
    left = right = 0
    changes = 0
    
    while left < len(arr) and right >= 0:
        if arr[left] != arr[right]:
            changes += 1
        left += 1
        right -= 1
        
    return changes