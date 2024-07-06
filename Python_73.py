```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n-1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            mid = (left + right) // 2
            if arr[mid] < arr[left]:
                arr[left], arr[mid] = arr[mid], arr[left]
            elif arr[mid] > arr[left]:
                arr[left], arr[right] = arr[right], arr[left]
            else:
                arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1
    
    return changes