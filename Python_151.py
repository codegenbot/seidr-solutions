
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of double the difference
    for each pair of adjacent numbers.
    
    double_the_difference([1, 3, 2, 0]) == (3-1)*2 + (2-3)*2 + (0-2)*2 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == (9-(-2))*2 = 20
    double_the_difference([0]) == 0  
   
    If the input list has less than two elements, return 0.
    '''

    # Complete the following code.
    # Hint: len(lst) returns the size or length of lst
    # Hint: abs(x) returns the absolute value (i.e., positive distance) 
    #       from x to 0 on the number line.

    difference = 0
    for elem in lst:
        difference += abs(lst - elem)
    return difference




def max_sublist(lst):
    '''
    Given a list of numbers, return the largest sum of a sublist of lst.
    A sublist is a contiguous subset of lst.

     max_sublist([]) == 0
    max_sublist([1]) == 1
    max_sublist([4, 5, 6]) == 15
    max_sublist([-3, 0, 1, -1]) == 1
    max_sublist([-1, -2, -3]) == 0

    The max sum for 1 is 1, for 4,5,6 is 15, etc.
    '''

    # Complete the following code.
    # Hint: len(lst) returns the size or length of lst
    # Hint: abs(x) returns the absolute value (i.e., positive distance) 
    #       from x to 0 on the number line.

    difference = 0
    for elem in lst:
        difference += abs(lst - elem)
    return difference
