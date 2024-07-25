def leaders(nums):
    return [
        n
        for i, n in reversed(list(enumerate(nums)))
        if all(n >= nums[j] for j in range(i + 1, len(nums)))
    ]