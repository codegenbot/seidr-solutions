def leaders(nums):
    return [
        num
        for num in reversed(nums)
        if all(num >= x for x in nums[nums.index(num) + 1 :])
    ]