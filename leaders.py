Here is the Python solution for the "leaders" problem:

def leaders(nums):
    leaders_list = [nums[-1]]
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] >= nums[i+1]:
            leaders_list.insert(0, nums[i])
    return leaders_list