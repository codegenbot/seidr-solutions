```
def leaders(nums):
    return [num for i, num in enumerate(nums) if all(num >= nums[j] for j in range(i+1, len(nums)))]