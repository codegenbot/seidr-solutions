from random import randint

from hypothesis import given, settings
import hypothesis.strategies as st

def double_the_difference(lst):
    sum = 0
    for i in lst:
        if i > 0 and i % 2 == 1:
            sum += i
    return sum * 2


    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''

    # Hint: You can use the modulus (%) operator to determine if a number is odd.

    my_list = []
    for i in range(20):
        my_list.append(randint(-5, 5))
    odd_sum = sum([i * i for i in lst if i > 0 and i % 2 == 1])
    assert check(double_the_difference, [my_list]) == odd_sum, 'error'

double_the_difference([1, 3, 2, 0])
double_the_difference([-1, -2, 0])
double_the_difference([9, -2])
double_the_difference([0])

print('SUCCESS!')
    #       For example, 10 % 2 == 0, and 11 % 2 == 1
