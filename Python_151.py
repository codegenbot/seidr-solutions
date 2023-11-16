
def double_the_difference(lst):
    '''
    Given a list of numbers, return 2 times the difference between the 
    numbers at the first and last indices of the list. Turns out numbers 
    in the list may not be integers, so ignore numbers that are not.
    If the list is empty, return 0.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
