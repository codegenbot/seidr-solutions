Here is the completed code:

def move_one_ball(arr):
    if len(arr) == 0:
        return True
    left = 1
    for i in range(1, len(arr)):
        if arr[i-1] > arr[i]:
            return False
        while left < i and arr[left-1] > arr[left]:
            left += 1
    return True