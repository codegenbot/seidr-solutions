
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the difference between the largest
    and smallest numbers in the list.
    
    double_the_difference([1, 3, 2, 0]) == (3 - 0) + (3 - 1) + (3 - 2) + (3 - 0) = 12
    double_the_difference([-1, -2, 0]) == (0 - (-2)) + (0 - (-1)) + (0 - (-2)) = 3
    double_the_difference([9, -2]) == (9 - (-2)) + (9 - (-2)) = 20
    double_the_difference([0]) == 0
   
    If the input list is empty, return 0.
    '''
    if len(lst) == 0:
        return 0
    else:
        return sum([max(lst) - i for i in lst])
