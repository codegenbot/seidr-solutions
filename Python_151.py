
def double_the_difference(a, b):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    sum_of_squares_of_odd([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    sum_of_squares_of_odd([-1, -2, 0]) == 0
    sum_of_squares_of_odd([9, -2]) == 81
    sum_of_squares_of_odd([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    if lst == []:
        return 0
    else:
        sum = 0
        for i in lst:
            if i % 2 == 1:
                sum += i**2
        return sum
