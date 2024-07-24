def move_one_ball(arr):
    if len(arr) == 0:
        return True

    arr.sort()

    for i in range(len(arr)):
        if arr[i] < arr[0]:
            return False
        arr = [arr[-1]] + arr[:-1]

    return True