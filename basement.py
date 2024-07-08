def basement(nums):
    for i in range(len(nums)):
        total = 0
        j = 0
        while j <= i:
            total += nums[j]
            if total < 0:
                return j
            j += 1
    return -1