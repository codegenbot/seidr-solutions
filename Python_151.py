"""
Given a list of integers, find the difference between the sum of squares of all positive even numbers and the sum of squares of all positive odd numbers.
"""

def double_the_difference(lst):
    even_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 == 0)
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return (even_sum - odd_sum) * 2