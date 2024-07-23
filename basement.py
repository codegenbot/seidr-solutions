def basement(nums):
    total = 0
    first_negative_sum = False
    for i in range(len(nums)):
        total += nums[i]
        if total < 0 and not first_negative_sum:
            return i + 1
        first_negative_sum = total < 0
    return -1