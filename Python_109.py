
def move_one_ball(arr):
    if len(arr) == 0:
        return True
    else:
        arr.sort()
        for i in range(1, len(arr)):
            if arr[i-1] > arr[i]:
                return False
        return True