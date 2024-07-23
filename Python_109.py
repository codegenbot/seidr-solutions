def move_one_ball(arr):
    if len(arr) == 0:
        return True

    for i in range(len(arr)):
        if arr[i] < arr[0]:
            return False
        else:
            break

    return True