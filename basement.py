def basement(nums):
    for i, num in enumerate((n for n in nums)):
        if sum(nums[:i+1]) < 0:
            return i