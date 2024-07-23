def basement(nums):
    total = 0
    i = 1
    while True:
        total += nums[i-1]
        if total < 0: 
            return i
        i += 1