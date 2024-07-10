def order_by_points(nums):
    return sorted((num and sum(int(digit) for digit in str(abs(num))), i) for i, num in enumerate(nums))