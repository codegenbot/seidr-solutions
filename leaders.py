def leaders(nums):
    leaders = []
    for i in range(len(nums)):
        if nums[i] >= max(nums[i+1:]):
            leaders.append(nums[i])
    return leaders