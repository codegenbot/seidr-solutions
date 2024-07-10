def move_one_ball(arr):
    n = len(arr)
    sorted_arr = sorted(arr)
    
    for i in range(n):
        if arr == sorted_arr:
            return True
        arr = [arr[-1]] + arr[:-1]
    
    return False