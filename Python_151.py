
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the product of the even numbers
    and the difference of the odd numbers.
    Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == (2 * 3) + (1 - 3) = 3
    double_the_difference([-1, -2, 0]) == 0 * 0 + 0 - 0 = 0
    double_the_difference([9, -2]) == 2 * 0 + 0 - 9 = -9
    double_the_difference([0]) == 0
   
    If the input list is empty, return 0.
    '''
    
    # Complete the code here

if __name__ == '__main__': # Do not remove the following line
    import doctest
    doctest.testmod()
