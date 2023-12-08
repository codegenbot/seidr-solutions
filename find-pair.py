
def find_pair(nums, target):
    for i, num in enumerate(nums):
        if num + nums[i+1] == target:
            return num, nums[i+1]
    return None, None