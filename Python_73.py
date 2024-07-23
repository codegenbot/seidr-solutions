```
def smallest_change(arr):
    arr_str = ''.join(map(str, arr))
    rev_arr_str = arr_str[::-1]
    diff_count = 0
    for i in range(len(arr_str)):
        if arr_str[i] != rev_arr_str[i]:
            diff_count += 1
    return diff_count