def order_by_points(nums):
    return sorted((i, num) for i, num in enumerate(nums)) if nums else []