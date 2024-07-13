def basement(nums):
    total_sum = 0
    i = 0
    seen_negative_sum = False
    while True:
        total_sum += nums[i]
        if total_sum < 0 and not seen_negative_sum:
            return i + 1
        elif total_sum >= 0:
            seen_negative_sum = False
        else:
            seen_negative_sum = True
        i += 1