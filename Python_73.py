def smallest_change(arr):
    n = len(arr)
    arr_pos = [*enumerate(arr)]
    pos_arr = {v:i for i,v in enumerate(arr)}
    
    ans =0
    while len(arr_pos)>1:
        min_val = float('inf')
        min_idx = -1
        for i in range(len(arr_pos)):
            if arr_pos[i][1]<min_val:
                min_val = arr_pos[i][1]
                min_idx = i
        ans += 1
        arr_pos[0],arr_pos[min_idx] = arr_pos[min_idx],arr_pos[0]
        pos_arr[arr_pos[0][1]],pos_arr[arr_pos[min_idx][1]] = pos_arr[arr_pos[min_idx][1]],pos_arr[arr_pos[0][1]]
    return ans