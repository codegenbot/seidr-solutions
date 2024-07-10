```
def smallest_change(arr):
    n = len(arr)
    left = 0
    right = n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(n):
                if arr[i] == arr[right]:
                    arr[left], arr[i] = arr[i], arr[left]
                    changes += 1
                    break
            right -= 1
        else:
            left += 1
            right -= 1
    
    return changes