def find_pair(nums, target):
    seen = set()
    for i in range(len(nums)):
        if nums[i] in seen:
            continue
        seen.add(nums[i])
        for j in range(i+1, len(nums)):
            if nums[j] + nums[i] == target:
                return i, j
    return None, None