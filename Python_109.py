def move_one_ball(arr):
    if not arr:
        return True
    n = len(arr)
    sorted_arr = sorted(arr)
    for i in range(n):
        if arr[i:] + arr[:i] == sorted_arr:
            return True
    return False