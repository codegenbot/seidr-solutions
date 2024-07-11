"""
Given a list of integers, find the difference between the maximum value that is doubled and the minimum value.
"""
def double_the_difference(lst):
    max_val = max(i for i in lst if isinstance(i, int) and i > 0)
    min_val = min(i for i in lst if isinstance(i, int) and i > 0)
    return (max_val * 2) - min_val