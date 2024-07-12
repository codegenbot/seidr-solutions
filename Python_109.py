def move_one_ball(arr):
    return all(arr[i] <= arr[(i+1) % len(arr)] for i in range(len(arr)))