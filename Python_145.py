def order_by_points(nums):
    return sorted((num, sum(int(digit) for digit in str(abs(num)))) for num in nums)