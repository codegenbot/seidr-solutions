"""
Given a list of integers, find the difference between the sum of squares of all positive numbers and twice the product of all positive numbers.
"""

def double_the_difference(lst):
    pos_nums = [i for i in lst if isinstance(i, int) and i > 0]
    return sum(i**2 for i in pos_nums) - 2 * math.prod(pos_nums)