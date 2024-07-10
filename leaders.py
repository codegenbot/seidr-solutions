def leaders(nums):
    return [
        num
        for i, num in enumerate(reversed(nums))
        if all(num >= x for x in nums[i + 1 :])
    ]