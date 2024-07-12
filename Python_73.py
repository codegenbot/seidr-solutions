```
def smallest_change(arr):
    n = len(arr)
    arr_str = ''.join(map(str, arr))
    rev_arr_str = arr_str[::-1]
    
    count = sum(1 for i in range(n) if arr[i] != int(rev_arr_str[i]))
    return count