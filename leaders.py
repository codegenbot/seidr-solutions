def leaders(nums):
    return [num for i, num in enumerate(reversed(nums)) if num >= all(nums[i + 1 :])]