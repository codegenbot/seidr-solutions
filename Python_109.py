Here is the completed code:

def move_one_ball(arr):
    if not arr:
        return True
    
    max_index = 0
    for i in range(1, len(arr)):
        if arr[i] < arr[max_index]:
            max_index = i
            
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            return False
            
    return True