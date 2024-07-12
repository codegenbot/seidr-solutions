def move_one_ball(arr):
    if len(arr) == 0:
        return True
    i = 1
    while i < len(arr):
        if arr[i] < arr[0]:
            return False
        i += 1
    return True