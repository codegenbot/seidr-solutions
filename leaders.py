def find_leaders(arr):
    if not arr:
        return []
    
    leaders = [arr[-1]]
    max_num = arr[-1]
    
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_num:
            leaders.insert(0, arr[i])
            max_num = arr[i]
    return leaders