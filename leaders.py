def leaders(nums):
    leaders = []
    max_right = nums[-1]
    for i in range(len(nums) - 1, -1, -1):
        if nums[i] >= max_right:
            leaders.append(nums[i])
            max_right = nums[i]
    return list(reversed(leaders))