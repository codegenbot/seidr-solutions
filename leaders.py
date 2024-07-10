Here is the solution:

def leaders(nums):
    return [max(nums[i:]) for i in range(len(nums))][::-1]