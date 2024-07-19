def move_one_ball(arr):
    return sorted(arr) == arr or sorted(arr) == arr[-1:] + arr[:-1] or sorted(arr) == arr[-2:] + arr[:-2]