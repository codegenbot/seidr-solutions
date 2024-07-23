```
def smallest_change(arr):
    arr = int(''.join(map(str,arr)))
    rev_arr = str(arr)[::-1]
    diff_count = 0
    for i in range(len(str(arr))):
        if str(arr)[i] != rev_arr[i]:
            diff_count += 1
    return diff_count