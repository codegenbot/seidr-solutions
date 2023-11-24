def basement(nums):
    total = nums[0]
    min_index = None
    for i in range(len(nums)):
        if total <= 0:
            min_index = i
            break
        total = nums[i]
    if min_index is None:
        return len(nums)
    else:
        return min_index

print(basement([45, -9, 3, -63, -80, 79, 86, -79]))