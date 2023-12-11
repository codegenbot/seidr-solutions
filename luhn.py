def luhn(nums):
    doubled = []
    for i in range(1, len(nums), 2):
        doubled.append((nums[i] * 2) % 9 or 9)
    return sum(doubled) + sum(nums[::2])