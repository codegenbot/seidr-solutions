def basement(nums):
    cum_sum = 0
    for i, n in enumerate(nums):
        cum_sum += n
        if cum_sum < 0:
            return i + 1
    return -1