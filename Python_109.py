```
def move_one_ball(arr):
    if len(arr) == 0:
        return True
    
    arr = [x for _, x in sorted((i, y) for i, y in enumerate(arr))]
    
    for i in range(1, len(arr)):
        if arr[i] < arr[0]:
            return False
    return True