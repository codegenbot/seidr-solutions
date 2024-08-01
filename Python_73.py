```
def smallest_change(arr):
    n = len(arr)
    arr_pos = [*enumerate(arr)]
    pos_arr = {val:i for i,val in enumerate(arr)}
    
    ans = 0
    while len(arr_pos) != 0:
        max_index = -1
        for i in arr_pos:
            if i[1] < arr[pos_arr[min(arr_pos, key=lambda x: x[1])][1]]:
                max_index = i
        arr_pos.remove(max_index)
        pos_arr[arr[max_index[1]]] = max_index[0]
        ans += 1
    return ans