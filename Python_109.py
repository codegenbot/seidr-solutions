```
def move_one_ball(arr):
    if len(arr) == 0:
        return True
    left = 1
    for i in range(1, len(arr)):
        if arr[i-1] > arr[i]:
            left = i
            break
    for _ in range(left):
        arr.append(arr.pop(0))
    return all(arr[i] <= arr[i+1] for i in range(len(arr)-1))