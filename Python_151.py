
# You are expected to write a function that takes in a list of integers and returns the sum of the squares of all odd numbers in the list.
def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result

# Test case 1:
assert double_the_difference([1, 2, 3, 4, 5]) == 9
# Test case 2:
assert double_the_difference([1, 3, 5, 7, 9]) == 90
# Test case 3:
assert double_the_difference([2, 4, 6, 8, 10]) == 0