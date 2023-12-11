def luhn(nums):
    total = 0
    for i in range(15, -1, -2):
        digit = nums[i]
        if digit >= 5:
            digit -= 9
        total += digit
    return total
