```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            max_left = right
            while left < max_left and arr[left] != arr[max_left]:
                max_left -= 1
            max_right = left
            while right > max_right and arr[right] != arr[max_right]:
                max_right += 1
            if max_left >= max_right:
                changes += n - (max_left + 1)
                left = max_left + 1
            else:
                changes += right - max_right
                right = max_right
        else:
            left += 1
            right -= 1
    
    return changes