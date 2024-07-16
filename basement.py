def basement(nums):
    cum_sum = 0
    for i, num in enumerate(nums):
        cum_sum += num
        if cum_sum < 0: continue
        if cum_sum == 0: cum_sum = 1
        elif cum_sum > 0: cum_sum = 0
    return -1 if cum_sum < 0 else i + 1