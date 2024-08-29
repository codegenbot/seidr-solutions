def basement(arr):
    running_sum = 0
    for i in range(len(arr)):
        running_sum += arr[i]
        if running_sum < 0:
            return i
    return -1