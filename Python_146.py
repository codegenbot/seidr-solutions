def specialFilter(nums):
    count = 0
    for num in nums:
        if abs(num) > 10 and str(abs(num)).endswith('1') or str(abs(num)).endswith('3') or str(abs(num)).endswith('5') or str(abs(num)).endswith('7') or str(abs(num)).endswith('9'):
            count += 1
    return count