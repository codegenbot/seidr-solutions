Here is the completed code:

def move_one_ball(arr):
    if not arr:
        return True
    
    min_val = min(arr)
    
    for i in range(len(arr)):
        if arr[i] > min_val:
            return False
    
    return True