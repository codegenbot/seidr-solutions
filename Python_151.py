"""
Given a list of integers, calculate the difference between the sum of squares of all positive integers in the list and twice the sum of all integers in the list.
"""

def double_the_difference(lst):
    square_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    total_sum = sum(i for i in lst if isinstance(i, int))
    return abs(square_sum - 2 * total_sum)