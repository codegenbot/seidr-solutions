def find_pair(nums, target):
    seen = {}
    
    for i in range(len(nums)):
        if nums[i] not in seen:
            seen[nums[i]] = i
            continue
        
        complement = target - nums[i]
        if complement in seen:
            return (nums[i], nums[seen[complement]])
    
    return None, None