```
def smallest_change(arr):
    n = len(arr)
    left = right = 0
    count = 0
    
    while left < n and right < n:
        if arr[left] != arr[n - right - 1]:
            if n % 2 == 1:
                return n // 2 + 1
            else:
                return n // 2
        left += 1
        right += 1
    
    count = (n - left) // 2
    for i in range(left, n):
        if arr[i] != arr[n - 1 - i]:
            count += 1
    return count