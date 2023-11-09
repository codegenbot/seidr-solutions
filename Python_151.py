
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the numbers in the list that are odd,
    multiplied by two. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 2 + 6 + 0 + 0 = 8
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 18
    double_the_difference([0]) == 0

    If the input list is empty, return 0.
    '''
    return sum([x for x in lst if x % 2 == 1 and isinstance(x, int) and x >= 0]) * 2
