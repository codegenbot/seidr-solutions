def basement(nums):
    total = 0
    index = 0
    for num in nums: 
        total += num
        index += 1
        if total < 0: return index
    return -1