def basement(nums):
    total = 0
    basement_index = -1
    for i in range(len(nums)):
        if total < 0:
            basement_index = i
            break
        else:
            total += nums[i]
    return basement_index