
def double_the_difference(lst):
    '''
    Given a list of numbers, return twice the difference between the largest and the smallest number
    in the list. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 2 * (3 - 0) = 6
    double_the_difference([-1, -2, 0]) == 0 
    double_the_difference([9, -2]) == 2 * (9 - (-2)) = 20
    double_the_difference([0]) == 0 
   
    If the input list is empty, return 0.
    '''
