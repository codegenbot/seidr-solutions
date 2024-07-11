"""
Given a list of integers, find the difference between the maximum value and the minimum value. 
Return this difference multiplied by 2.
"""
def double_the_difference(lst):
    if not all(isinstance(i, int) for i in lst):
        return "Invalid input: The list must contain only integers."
    elif len(lst) == 0:
        return "Invalid input: The list cannot be empty."
    else:
        return 2 * (max(lst) - min(lst))