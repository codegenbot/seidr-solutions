def luhn(nums):
    result = 0
    for i in range(1, len(nums) + 1):
        if i % 2 == 0:
            result += nums[i - 1]
        else:
            doubled = nums[i - 1] * 2
            if doubled > 9:
                doubled -= 9
            result += doubled
    return result