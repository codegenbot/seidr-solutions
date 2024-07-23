```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n and right < n:
        if arr[left] != arr[n - right - 1]:
            if right == left:
                right += 1
            else:
                changes += 2
                left += 1
                right += 1
        elif arr[left] == arr[n - right - 1]:
            left += 1
            right += 1
    
    return changes