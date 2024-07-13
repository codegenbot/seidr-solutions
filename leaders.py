def leaders(nums):
    leaders_list = []
    max_right = nums[-1]
    leaders_list.append(max_right)
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] >= max_right:
            max_right = nums[i]
            leaders_list.insert(0, max_right)
    return leaders_list