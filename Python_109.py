def move_one_ball(arr):
    if not arr:
        return True
    
    max_idx = arr.index(max(arr))
    
    for i in range(len(arr) - 1):
        if arr[i] > arr[i+1]:
            return False
    return True