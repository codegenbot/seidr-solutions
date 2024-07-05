
def move_one_ball(arr):
    n = len(arr)
    if n == 0:
        return True
    arr.sort()
    for i in range(n-1):
        if arr[i] > arr[i+1]:
            return False
    return True