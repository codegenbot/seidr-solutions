def smallest_change(arr):
    n = len(arr)
    arr_str = [str(x) for x in arr]
    rev_arr_str = ["".join(sorted(str(x))) for x in arr]
    diff_count = sum(1 for i in range(n) if arr_str[i] != rev_arr_str[i])
    return diff_count