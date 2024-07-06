```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - left - 1]:
            changes += 1
            right = n - left - 1
            break
        left += 1
    
    for i in range(left, n // 2):
        if arr[i] != arr[n - i - 1]:
            changes += 1
            right = n - i - 1
            break
    
    return changes