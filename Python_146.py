```
def specialFilter(nums):
    count = 0
    for num in nums:
        if abs(num) > 10 and str(abs(num)).startswith('1') or str(abs(num)).startswith('3') or str(abs(num)).startswith('5') or str(abs(num)).startswith('7') or str(abs(num)).startswith('9'):
            count += 1
    return count