def find_pair(nums, target):
    sum = 0
    for i in range(len(nums)):
        if nums[i] == target - sum:
            return (nums[i], nums[i-1])
        sum += nums[i]
    return None