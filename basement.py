def basement(nums):
    total_sum = 0
    negative_found = False
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            negative_found = True
    return -1 if not negative_found else i