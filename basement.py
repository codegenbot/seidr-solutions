def first_negative_index(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i
    return len(nums) - 1