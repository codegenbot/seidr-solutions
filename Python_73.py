```
def smallest_change(arr):
    n = len(arr)
    arr_pos = [*enumerate(arr)]
    arr_pos.sort(key=lambda x: x[1])
    
    pos_dict = {v: k for k, v in arr_pos}
    
    ans = 0
    for i in range(n):
        if arr[i] != arr_pos[i][1]:
            ans += 1
    
    return ans