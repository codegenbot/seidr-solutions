def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return nums[i], nums[j]
            elif nums[i] < 0 or nums[j] < 0:
                return -1