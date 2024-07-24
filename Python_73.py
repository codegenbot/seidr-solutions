```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            mid = (left + right) // 2
            min_diff = float('inf')
            for i in range(left, right):
                diff = abs(arr[i] - arr[right])
                if diff < min_diff:
                    min_diff = diff
                    mid = i
            arr[mid], arr[right] = arr[right], arr[mid]
            changes += 1
        left += 1
        right -= 1
    
    return changes