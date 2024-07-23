def basement(arr):
    cum_sum = 0
    for i, x in enumerate(arr):
        cum_sum += x
        if cum_sum < 0:
            return i + 1
    return -1