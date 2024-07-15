def move_one_ball(arr):
    return sorted(arr) == arr or any(sorted(arr) == arr[-i:] + arr[:-i] for i in range(1, len(arr)))