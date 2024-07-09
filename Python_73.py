```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            mid = (left + right) // 2
            for i in range(left, right + 1):
                if arr[i] == arr[mid]:
                    if left <= mid:
                        left += 1
                    else:
                        right -= 1
                        break
                    changes += 1
                    break
            if i > right:
                changes = min(changes + right - left, n - right - 1)
            left = max(left, mid + 1)
            right = n - 1
    
    return changes