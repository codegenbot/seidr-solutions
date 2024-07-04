def move_one_ball(arr):
    if not arr:
        return True
    n = len(arr)
    for i in range(n):
        if arr[i:] + arr[:i] == sorted(arr):
            return True
    return False