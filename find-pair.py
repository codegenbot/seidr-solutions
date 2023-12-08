
def find_pair(nums, target):
    seen = set()
    for i in range(len(nums)):
        if nums[i] in seen and nums[i] + nums[seen[nums[i]]] == target:
            return nums[i], nums[seen[nums[i]]]
        else:
            seen.add(nums[i])
    return None