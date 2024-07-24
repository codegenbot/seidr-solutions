def smallest_change(arr):
    n = len(arr)
    arr = ['0' if x == 0 else '1' for x in arr]
    rev_arr = ''.join(reversed(arr))
    diff_count = 0
    for i in range(n//2):
        if arr[i] != rev_arr[n-i-1]:
            diff_count += 1
    return diff_count