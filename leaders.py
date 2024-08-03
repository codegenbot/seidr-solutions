def leaders(nums):
    leaders_list = [nums[-1]]
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] >= nums[-1]:
            leaders_list.append(nums[i])
            nums[-1] = nums[i]
    return list(reversed(leaders_list))