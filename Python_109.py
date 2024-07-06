def move_one_ball(arr):
    if len(arr) == 0:
        return True

    left = 0
    for right in range(len(arr)):
        if arr[right] < arr[left]:
            return False
        left += 1

    return True