```
def move_one_ball(arr):
    if not arr:
        return True
    max_idx = len(arr) - 1
    for i in range(len(arr) // 2):
        j = len(arr) - 1 - i
        if arr[i] > arr[j]:
            return False
    return True