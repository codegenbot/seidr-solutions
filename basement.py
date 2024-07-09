def basement(nums):
    running_total = 0
    in_basement = False
    for i in range(len(nums)):
        running_total += nums[i]
        if not in_basement and running_total < 0:
            return i + 1
        elif running_total < 0: 
            in_basement = True
    return -1