
def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num**2
    return result

# Test case 1:
lst = [1, 2, 3, 4]
assert double_the_difference(lst) == 9

# Test case 2:
lst = [-1, -2, -3, -4]
assert double_the_difference(lst) == 0

# Test case 3:
lst = [1, 2, 3, 4, 5]
assert double_the_difference(lst) == 25