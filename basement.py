def basement(nums):
    total = 0
    seen_negative_sum = False
    for i in range(len(nums)):
        total += nums[i]
        if not seen_negative_sum and total < 0:
            seen_negative_sum = True
        elif seen_negative_sum and total >= 0:
            return i + 1
    return -1