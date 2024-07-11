def move_one_ball(arr):
    if len(arr) == 0:
        return True

    max_element = max(arr)

    for i in range(len(arr)):
        if arr[i] > max_element:
            return False

    return True