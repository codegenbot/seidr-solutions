def move_one_ball(arr):
    sorted_arr = sorted(arr)
    return sorted_arr == arr or any(sorted_arr == arr[-i:] + arr[:-i] for i in range(1, len(arr)))