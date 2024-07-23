def basement(nums):
    left = right = total = 0
    while True:
        if total < 0:
            return right 
        total += nums[right-1]
        right += 1
        if right == len(nums):
            break
    return -1