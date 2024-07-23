def move_one_ball(arr):
    if not arr:
        return True

    for i in range(1, len(arr)):
        if arr[i] < arr[0]:
            return False
    return True