def move_one_ball(arr):
    if len(arr) == 0:
        return True

    min_val = min(arr)
    max_val = max(arr)

    for i in range(len(arr)):
        if arr[i] < min_val or arr[i] > max_val:
            return False

    return True