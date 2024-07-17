def basement(arr):
    total_sum = 0
    for i in range(len(arr)):
        if total_sum < 0:
            return i
        total_sum += arr[i]
    return -1