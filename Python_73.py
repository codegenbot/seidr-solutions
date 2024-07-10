```
def smallest_change(arr):
    n = len(arr)
    arr = [str(x) for x in arr]
    arr = ''.join(arr)
    
    i = j = 0
    while i < n // 2:
        if arr[i] != arr[n - i - 1]:
            return n - i - 1
        i += 1
    
    return 0