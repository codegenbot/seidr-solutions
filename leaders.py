def leaders(nums):
    return [
        nums[i]
        for i in range(len(nums) - 1, -1, -1)
        if all(x <= nums[i] for x in nums[i + 1 :])
    ]