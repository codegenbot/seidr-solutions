def move_one_ball(arr):
    if not arr:
        return True
    sorted_arr = sorted(arr)
    return sorted_arr == arr or sorted_arr == arr[::-1]