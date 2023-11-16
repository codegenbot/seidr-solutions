
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 1
    double_the_difference([-1, -2, 0]) == 0 - 1 - 4 = -5
    double_the_difference([9, -2]) == 81 - 1 - 4 = 76
    double_the_difference([0]) == 0
   
    If the input list is empty, return 0.
    '''
    result = 0
    for i in lst:
        if (i > 0) and (i == int(i)):
            if i % 2 == 1:
                result += i  
            else:
                result -= i
    if result >= 0:
        result = result * 2
    else:
        return abs(result)
    return result
