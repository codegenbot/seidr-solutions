"""
Given a list of integers, calculate the difference between the sum of the squares of all positive numbers and twice the product of the given positive numbers.
"""

def double_the_difference(lst):
    pos_sum_squares = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    pos_product = eval('*'.join(str(i) for i in lst if isinstance(i, int) and i > 0))
    return pos_sum_squares - 2 * pos_product