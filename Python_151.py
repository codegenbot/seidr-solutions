"""
Write a function that takes a list of integers as an input and returns the sum of all squares of numbers that are both odd and positive.
"""

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0 and i > 0)