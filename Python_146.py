def specialFilter(nums):
    count = 0
    for num in nums:
        if abs(num) > 10 and (num % 10) % 2 != 0:
            count += 1
    return count