def find_closest_elements(nums):
    nums.sort()
    closest_pair = (nums[0], nums[1])
    min_diff = abs(nums[1] - nums[0])

    for i in range(1, len(nums) - 1):
        diff = nums[i+1] - nums[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (nums[i], nums[i+1])

    return closest_pair