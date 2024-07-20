def find_first_negative_index(nums):
    total_sum = 0
    if any(num < 0 for num in nums):
        total_sum = sum(nums[:nums.index(min(x for x in nums if x < 0)) + 1])
    else:
        return len(nums) - 1
    if total_sum < 0:
        return nums.index(min(x for x in nums if x < 0))
    return len(nums) - 1