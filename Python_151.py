
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
    sum_of_difference = 0
    for i in lst:
        if i > 0 and isinstance(i, int):
            if i % 2 == 1:
                sum_of_difference += i ** 2
    return sum_of_difference


def check(func):
    if func([1, 3, 2, 0]) == 10:
        print(10)
    else:
        print(0)
    if func([-1, -2, 0]) == 0:
        print(10)
    else:
        print(0)
    if func([9, -2]) == 81:
        print(10)
    else:
        print(0)
    if func([0]) == 0:
        print(10)
    else:
        print(0)
    if func([]) == 0:
        print(10)
    else:
        print(0)
    if func(lst) == odd_sum:
        print(10)
    else:
        print(0)


check(double_the_difference)
