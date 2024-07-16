def basement(nums):
    cum_sum = 0
    negative_encountered = False
    for i in range(len(nums)):
        cum_sum += nums[i]
        if cum_sum < 0:
            negative_encountered = True
        elif not negative_encountered and cum_sum > 0:
            return i + 1
    if negative_encountered:
        return len(nums) + 1
    return len(nums) + 2