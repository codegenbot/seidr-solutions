
def double_the_difference(lst):
    """
    Given a list of numbers, return the sum of the differences of squares of 
    adjacent numbers in the list. If the input list is empty, return 0.

    For example:
        double_the_difference([1, 3, 2, 0]) == (1 - 3)^2 + (3 - 2)^2 + (2 - 0)^2 = 10
        double_the_difference([-1, -3, -2, 0]) == 0
        double_the_difference([9, -2]) == 81
        double_the_difference([0]) == 0
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
