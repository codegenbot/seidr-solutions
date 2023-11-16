
def double_the_difference(lst):
    '''
    Write a function for finding the index of the "rotation point,"
    which is
    where I started working from the beginning of the dictionary. This

    For example:    
    double_the_difference(0) == 0    

    For example:  
    double_the_difference(2) == 4    
    
    double_the_difference(4) == 16
    '''
    d_the_difference_lst = sum(lst) 
    return d_the_difference_lst 
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0."""
