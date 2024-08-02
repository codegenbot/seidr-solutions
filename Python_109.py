```
def move_one_ball(arr):
    if len(arr) == 0:
        return True
    
    max_index = arr.index(max(arr))
    
    for i in range(1, len(arr)):
        if arr[i-1] > arr[i]:
            return False
    return True