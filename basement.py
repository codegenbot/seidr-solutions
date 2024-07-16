```
def basement(nums):
    cum_sum = 0
    for i in range(len(nums)):
        cum_sum += nums[i]
        if cum_sum < 0:
            return i + 1
        elif cum_sum == 0 and i > 0:
            continue
    return -1