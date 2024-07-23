def basement(nums):
    left = right = 0
    while True:
        total = 0
        while right < len(nums) and total + nums[right] <= 0:
            total += nums[right]
            right += 1
        if total <= 0:  
            return right - 1 
        if right == len(nums):
            break
        left = right
    return -1