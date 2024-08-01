```
def smallest_change(arr):
    n = len(arr)
    arr_pos = [*enumerate(arr)]
    pos_arr = {v:i for i,v in enumerate(arr)}
    
    ans = 0
    while arr_pos:
        max_length = 0
        end = -1
        for i, val in list(arr_pos):
            if val == end:
                del arr_pos[i]
                continue
            if pos_arr[val] != i:
                temp = pos_arr[val]
                pos_arr[val] = i
                arr_pos[i], arr_pos[temp] = arr_pos[temp], arr_pos[i]
                ans += 1
            else:
                max_length = max(max_length, i+1)
        end = arr[pos_arr[max(arr_pos)]]
    return ans