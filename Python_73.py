```
def smallest_change(arr):
    n = len(arr)
    arr = [str(x) for x in arr]
    arr = ''.join(arr)
    rev_arr = arr[::-1]
    
    count = 0
    for i in range(n):
        if arr[i] != rev_arr[n-i-1]:
            count += 1

    return count