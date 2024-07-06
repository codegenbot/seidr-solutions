```
def smallest_change(arr):
    arr.sort()
    left, right = 0, len(arr) - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(left+1, right+1):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            left += 1
        else:
            left += 1
            right -= 1
    
    return changes