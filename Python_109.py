def move_one_ball(arr):
    return all(arr[i] <= arr[i+1] for i in range(len(arr) - 1))