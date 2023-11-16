def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the difference between
    each number and the next number in the list.
    The last number in the list is the same as the first number.
    
    double_the_difference([1, 2, 3, 4]) == (1 - 2) + (2 - 3) + (3 - 4) + (4 - 1) = -2
    double_the_difference([-1, 0, 1]) == (-1 - 0) + (0 - 1) + (1 - -1) = -2
    double_the_difference([9, -2]) == (9 - -2) + (-2 - 9) = 20
    double_the_difference([0]) == 0
   
    If the input list is empty, return 0.
    '''
