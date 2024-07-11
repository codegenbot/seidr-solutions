"""
Given a list of integers, this function calculates the total sum of all positive squares that are multiples of 3.
"""
def double_the_difference(lst):
    return 2 * (sum(i**2 for i in lst if isinstance(i, int) and i % 3 == 0 and i > 0))