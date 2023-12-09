def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result

# Test case 1:
assert double_the_difference([]) == 0

# Test case 2:
assert double_the_difference([1, 3, 5]) == 34

# Test case 3:
assert double_the_difference([-1, -3, -5]) == 0

# Test case 4:
assert double_the_difference([1, 2, 3, 4, 5]) == 55