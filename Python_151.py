"""
Given a list of integers, find the difference between the sum of squares of all positive integers in the list and twice the sum of all positive integers in the list.
"""

def double_the_difference(lst):
    pos_ints = [i for i in lst if isinstance(i, int) and i > 0]
    return (sum(i**2 for i in pos_ints) - 2 * sum(pos_ints))