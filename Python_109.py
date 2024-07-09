def move_one_ball(arr):
    if len(arr) == 0:
        return True
    
    max_idx = arr.index(max(arr))
    
    for i in range(len(arr)):
        if arr[(max_idx - i) % len(arr)] > arr[(max_idx - i + 1) % len(arr)]:
            return False
    
    return True