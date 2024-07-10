```
def smallest_change(arr):
    arr = [str(x) for x in arr]
    rev_arr = ''.join(reversed(arr))
    diff_count = 0
    i = j = 0
    while i < len(arr) and j < len(rev_arr):
        if arr[i] != rev_arr[j]:
            diff_count += 1
        i += 1
        j += 1
    return diff_count