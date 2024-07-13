Here is the Python solution for the problem:

def leaders(nums):
    return [num for i, num in reversed(list(enumerate(nums))) if all(num >= nums[j] for j in range(i+1, len(nums)))]