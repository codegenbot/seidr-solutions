Here is the Python solution for the problem:

def leaders(nums):
    result = [nums[-1]]
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] >= nums[i + 1]:
            result.append(nums[i])
    return reversed(result)