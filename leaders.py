def leaders(nums):
    result = []
    current_leader = nums[-1]
    for i in range(len(nums)-2, -1, -1):
        if nums[i] >= current_leader:
            result.append(current_leader)
            current_leader = nums[i]
    return result
