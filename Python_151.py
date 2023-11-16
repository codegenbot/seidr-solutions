
def double_the_difference(lst):
    '''
    Given a list of numbers, return twice the difference between the
    largest and the smallest number in the list.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    if len(lst) < 1:
        return 0
    else:
        return (max(lst) - min(lst)) * 2
