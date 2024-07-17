def basement(nums):
    total_sum = 0
    seen_negative_sum = False
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            if not seen_negative_sum:
                return i
            seen_negative_sum = True
    return -1