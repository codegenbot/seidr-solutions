def basement(nums):
    cum_sum = 0
    i = 0
    neg_index = -1
    is_negative = False
    while i < len(nums): 
        cum_sum += nums[i]
        if cum_sum < 0:
            is_negative = True
        elif is_negative and cum_sum >= 0:
            return i + 1
        i += 1
    return neg_index