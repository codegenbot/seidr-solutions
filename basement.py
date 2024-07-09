def basement(nums):
    total_sum = 0
    sign_changed = False
    for i in range(len(nums)):
        total_sum += nums[i]
        if not sign_changed and total_sum < 0:
            return i + 1
        elif not sign_changed and total_sum >= 0:
            sign_changed = True
    return -1