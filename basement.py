def basement(nums):
    cum_sum = 0
    for i, num in enumerate(nums):
        cum_sum += num
        if cum_sum < 0: return i + 1
    return -1