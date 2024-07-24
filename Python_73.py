```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += min(n - left - 1, right + 1) - 1
            break
        left += 1
        right -= 1
        
    for i in range(left + 1):
        if arr[i] != arr[n - 1 - i]:
            changes += 1
            
    return changes