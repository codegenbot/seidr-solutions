def get_negative_sum_index(arr):
    running_sum = 0
    for i in range(len(arr)):
        if arr[i] < 0:
            return i
        running_sum += arr[i]
        if running_sum < 0:
            return i
    return -1