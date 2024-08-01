```
def smallest_change(arr):
    n = len(arr)
    arr_pos = [*enumerate(arr)]
    
    arr_pos.sort(key=lambda x: x[1])
    
    arr_pos.sort(key=lambda x: x[0])
    
    i, j = 0, 0
    ans = 0
    while j < n:
        if arr_pos[i][1] <= arr_pos[j][1]:
            i += 1
        else:
            j += 1
            if i != j:
                ans += 1
    
    return ans