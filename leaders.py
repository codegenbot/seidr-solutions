Here is the completed Python solution:

def leaders(nums):
    result = []
    for i in range(len(nums)):
        if i == len(nums) - 1 or nums[i] >= max(nums[i+1:]):
            result.append(nums[i])
    return result