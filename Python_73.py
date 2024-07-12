```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    count = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(left + 1, right):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    count += 1
                    break
            else:
                arr[left], arr[right] = arr[right], arr[left]
                count += 1
        left += 1
        right -= 1
    
    return count