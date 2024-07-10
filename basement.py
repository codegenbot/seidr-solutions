def basement(nums):
    total = sum(1 if x < 0 else 0 for x in nums)
    return 0 if total < 0 else next((i+1 for i, x in enumerate(nums) if sum(x for _ in range(i+1)) < 0), -1)