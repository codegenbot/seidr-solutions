def basement(arr):
    cum_sum = 0
    for i in range(len(arr)):
        cum_sum += arr[i]
        if cum_sum < 0:
            return i
    return -1