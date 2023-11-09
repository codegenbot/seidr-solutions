
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the difference
    between the numbers in the list that are odd and the numbers in the
    list that are even. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == (1 - 2) ** 2 + (3 - 0) ** 2 = 9
    double_the_difference([-1, -2, 0]) == 0 ** 2 + 0 ** 2 = 0
    double_the_difference([9, -2]) == (9 - (-2)) ** 2 = 81
    double_the_difference([0]) == 0 ** 2 = 0  
   
    If the input list is empty, return 0.
    '''
    return sum((odd - even) ** 2 for odd in lst if odd % 2 != 0 for even in lst if even % 2 == 0)
