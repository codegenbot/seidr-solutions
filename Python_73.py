```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            changes += 1
            right = n - 1 - left
            break
        left += 1
    
    for i in range(left, n // 2):
        if arr[i] != arr[n - 1 - i]:
            changes += 1
    
    return changes