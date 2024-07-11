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
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            right -= 1
        else:
            left += 1
            right -= 1
    
    return changes