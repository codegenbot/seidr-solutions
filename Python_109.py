def move_one_ball(arr):
    if len(arr) == 0:
        return True

    smallest = min(arr)

    for i in arr:
        if i < smallest:
            return False
        elif i == smallest:
            smallest += 1

    return True