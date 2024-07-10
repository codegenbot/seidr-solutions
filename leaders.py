def leaders(nums):
    n = len(nums)
    res = [nums[n - 1]]

    for i in range(n - 2, -1, -1):
        if nums[i] >= nums[i + 1]:
            res.append(nums[i])

    return list(reversed(res))