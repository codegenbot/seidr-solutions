```
def smallest_change(arr):
    n = len(arr)
    left = 0
    right = n - 1
    count = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(n):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    count += 1
                    break
            left += 1
        else:
            left += 1
            right -= 1
    
    return count