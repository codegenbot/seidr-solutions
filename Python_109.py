def move_one_ball(arr):
    
    if len(arr) == 0:
        return True
    
    max_val = max(arr)
    
    for i in range(len(arr)):
        if arr[i] > max_val - len(arr) + i:
            return False
    return True