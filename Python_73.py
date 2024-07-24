```
def smallest_change(arr):
    if isinstance(arr[0], list):  
        n = len(arr[0])
        arr_str = ''.join([str(x) for x in arr[0] + arr[1]])
    else:  
        n = 2
        arr_str = str(arr[0]) + str(arr[1])

    rev_arr_str = arr_str[::-1]
    diff_count = 0

    for i in range(n//2):
        if arr_str[i] != rev_arr_str[n-i-1]:
            diff_count += 1

    return diff_count