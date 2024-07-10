def leaders(nums):
    leaders = [nums[-1]]
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] >= nums[-1]:
            leaders.append(nums[i])
            nums[-1] = nums[i]
    return list(reversed(leaders))