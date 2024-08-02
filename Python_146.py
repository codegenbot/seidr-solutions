def specialFilter(nums):
    count = 0
    for num in nums:
        if abs(num) > 10 and (abs(num) % 10 % 10 or abs(num) // 10 % 10):
            count += 1
    return count