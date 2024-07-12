```
def smallest_change(arr):
    arr = list(map(str, arr))
    n = len(arr)
    rev_arr = arr[::-1]
    count = 0
    for i in range(n):
        if arr[i] != rev_arr[i]:
            count += 1
    return count