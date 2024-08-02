```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            middle = min((left + right), (right - left))
            for i in range(left, left + middle):
                if arr[i] == arr[right]:
                    left = i
                    break
            right -= (middle - 1)
            changes += 1
        else:
            left += 1
            right -= 1
    
    return changes