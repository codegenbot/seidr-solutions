
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            k = nums[j] - nums[i] + target
            if k < 0:
                continue
            elif k > len(nums) or nums[k] != target - nums[i] - nums[j]:
                return None, None, None
    return nums[i], nums[j], nums[k]