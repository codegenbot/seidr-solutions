def move_one_ball(arr):
    if not arr:
        return True
    sorted_arr = sorted(arr)
    return any(arr == sorted_arr[i:] + sorted_arr[:i] for i in range(len(arr)))