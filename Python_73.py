```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    count = 0
    
    while left < n and right < n:
        if arr[left] == arr[n - 1 - right]:
            left += 1
            right += 1
        else:
            right += 1
            count += 1
    
    return count