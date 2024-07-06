def double_the_difference(numbers):
    result = 0
    for num in numbers:
        if num % 2 != 0 and num > 0:
            result += num**2
    return result


# Test case 1
assert double_the_difference([]) == 0

# Test case 2
assert double_the_difference([3, 5, 7]) == 64