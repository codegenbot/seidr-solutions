```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            temp_max = float('inf')
            for i in range(n):
                if i != left and i != right and arr[i] == arr[right]:
                    temp_max = min(temp_max, i - left)
            changes += temp_max + 1
            break
        else:
            left += 1
            right -= 1
    
    return changes