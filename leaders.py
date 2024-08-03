def leaders(nums):
    leaders_list = []
    max_num_right = nums[-1]
    for i in range(len(nums) - 1, -1, -1):
        if nums[i] >= max_num_right:
            leaders_list.append(nums[i])
            max_num_right = nums[i]
    return leaders_list[::-1]