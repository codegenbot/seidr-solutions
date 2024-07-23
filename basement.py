def basement(nums):
    total = 0
    index = 0
    for num in nums: 
        total += num
        if total < 0: continue  # reset running total when sum is negative
        index += 1
    return index + 1 if total < 0 else -1