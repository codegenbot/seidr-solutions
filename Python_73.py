def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]
    changes = sum(1 for i in range(n) if arr[i] != rev_arr[i])
    return changes