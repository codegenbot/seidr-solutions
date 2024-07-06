```
def smallest_change(arr):
    arr_len = len(arr)
    left = 0
    right = arr_len - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += (right - left) + 1
            break
        else:
            if arr[left] == arr[right]:
                left += 1
                right -= 1
            else:
                break
    
    for i in range(left+1):
        if arr[i] != arr[arr_len-1-i]:
            changes += (arr_len - 1) // 2 - i
            break
    
    return changes