def double_the_difference(nums):
    result = 0
    for num in nums:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result

# Test case 1:
assert double_the_difference([]) == 0

# Test case 2:
assert double_the_difference([1, 2, 3, 4]) == 9

# Test case 3:
assert double_the_difference([-1, -2, -3, -4]) == 0