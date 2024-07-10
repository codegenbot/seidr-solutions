Here is the corrected code:

```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            max_left = max(range(left + 1, right), key=lambda i: arr[i])
            min_right = min(range(left + 1, right), key=lambda i: arr[i])
            if arr[max_left] > arr[min_right]:
                changes += (right - max_left)
            else:
                changes += (min_right - left)
            left = max_left
            right = min_right
        else:
            left += 1
            right -= 1
    
    return changes