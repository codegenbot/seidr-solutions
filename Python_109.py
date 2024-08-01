def move_one_ball(arr):
    arr.sort()
    if arr == sorted(arr):
        return True
    else:
        return False