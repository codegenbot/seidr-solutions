def find_pair(nums, target):
    nums.sort()
    for i in range(len(nums)):
        left = 0
        right = len(nums) - 1
        while left < right:
            if nums[left] + nums[right] == target:
                return (nums[left], nums[right])
            elif nums[left] + nums[right] > target:
                right -= 1
            else:
                left += 1
    return None