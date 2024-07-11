"""
Given a list of numbers, find the difference between the maximum and minimum values, double that result, then return it.
"""
def double_the_difference(lst):
    min_val = min(i for i in lst if isinstance(i, int) and i > 0)
    max_val = max(i for i in lst if isinstance(i, int) and i > 0)
    diff = (max_val - min_val) * 2
    return diff