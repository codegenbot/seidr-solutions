def double_the_difference(nums):
    
    result = 0
    for num in nums:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result
