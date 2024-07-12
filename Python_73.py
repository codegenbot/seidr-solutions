```Python
def smallest_change(arr):
    n = len(arr)
    arr = [int(x) for x in arr]
    rev_arr = sorted(arr)[::-1]
    diff_count = sum(1 for i in range(n) if arr[i] != rev_arr[i])
    return diff_count