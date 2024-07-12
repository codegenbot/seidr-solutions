```
def smallest_change(arr):
    n = len(arr)
    arr_str = ''.join(map(str, arr))
    rev_arr_str = arr_str[::-1]
    diff_count = sum(c1 != c2 for c1, c2 in zip(arr_str, rev_arr_str))
    return diff_count