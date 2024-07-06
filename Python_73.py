```
def smallest_change(arr):
    arr = list(set(arr))
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(n-1):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            left += 1
        else:
            left += 1
            right -= 1
    
    return changes