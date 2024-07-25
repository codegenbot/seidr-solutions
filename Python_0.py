def has_close_elements(nums, threshold):
    nums = set(nums)
    for num in nums:
        close_nums = [n for n in nums if abs(n - num) <= threshold]
        if len(close_nums) > 1:
            return True
    return False