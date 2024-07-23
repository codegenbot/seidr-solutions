def basement(nums):
    total = 0
    basement_index = -1
    for i in range(len(nums)):
        total += nums[i]
        if total < 0: 
            basement_index = i + 1
            break
    return basement_index