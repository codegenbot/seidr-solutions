def basement(nums):
    total = 0
    i = 0
    for j in range(len(nums)):
        total += nums[j]
        if total < 0:
            if j == 0: 
                return j + 1
            else:
                return j + 1
            break
    return -1