def order_by_points(nums):
    return sorted(
        (n and sum(int(digit) for digit in str(abs(n))), i) for i, n in enumerate(nums)
    )