```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            max_left = right
            for i in range(left + 1, right):
                if arr[i] == arr[right]:
                    max_left = i
                    break
            min_right = left
            for i in range(right - 1, left, -1):
                if arr[i] == arr[left]:
                    min_right = i
                    break
            changes += (max_left - left) + (right - min_right)
            left, right = max_left, min_right
        else:
            left, right = left + 1, right - 1
    
    return changes