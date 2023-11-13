
from programlib.programs.9270e0f4-c658-420c-94ee-a544b5334e4e import check

def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    
    # Complete the code here 
    for i in range(len(lst)):
        if lst[i] % 2 != 0:
            lst[i] = lst[i] * 2
        else: 
            lst[i] = 0
    return sum(lst)


check(double_the_difference)
