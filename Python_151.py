"""
Given a list of integers, find the difference between the maximum possible value that can be obtained by doubling all positive numbers in the list and the sum of squares of these doubled values.
"""
def double_the_difference(lst):
    max_positive = max(i for i in lst if isinstance(i, int) and i > 0)
    return (max_positive * 2 - max_positive) + sum((i*2)**2 for i in lst if isinstance(i, int) and i > 0)