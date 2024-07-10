def move_one_ball(arr):
    return sorted(arr) == arr or any(sorted(arr) == arr[-1:] + arr[:-1] for _ in range(len(arr)))