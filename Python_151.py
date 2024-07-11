"""
Given a list of integers, find the difference between the product of all negative numbers and the product of all non-negative numbers.
For example, if input is [-1, -2, 3, 0], output will be (-1 * -2) - (3 * 0) = 2.

"""
def double_the_difference(lst):
    neg_product = 1
    pos_or_zero_product = 1
    
    for num in lst:
        if num < 0:
            neg_product *= num
        elif num >= 0:
            pos_or_zero_product *= num
            
    return neg_product - pos_or_zero_product