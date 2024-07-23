```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            mid = (left + right) // 2
            for i in range(left, right):
                if arr[i] > arr[mid]:
                    arr[i], arr[mid] = arr[mid], arr[i]
            right -= 1
        else:
            left += 1
            right -= 1
    
    return changes