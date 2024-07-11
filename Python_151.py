"""
Given a list of integers and strings, find the difference between the sum of squares of positive integers and the product of all digits in the given strings.
"""
def double_the_difference(lst):
    squares_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    digits_product = 1
    for s in [str(i) for i in lst if isinstance(i, str)]:
        for digit in s:
            digits_product *= int(digit)
    return squares_sum - digits_product