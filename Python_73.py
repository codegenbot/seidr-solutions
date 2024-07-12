```
def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]
    
    change_count = 0
    for i in range(n // 2):
        if arr[i] != rev_arr[i]:
            change_count += 1
    
    return change_count