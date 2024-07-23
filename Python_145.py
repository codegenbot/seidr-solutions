def order_by_points(nums):
    return sorted(
        (num and sum(int(digit)) for num in nums), key=lambda x: (x[1], -x[0])
    )