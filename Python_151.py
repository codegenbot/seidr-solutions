
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
    odd_numbers = []
    even_numbers = []
    for number in lst:
        if number % 2 == 0:
            even_numbers.append(number)
        else:
            odd_numbers.append(number)
    sum_of_squares = 0
    for odd_number in odd_numbers:
        for even_number in even_numbers:
            sum_of_squares += (odd_number - even_number) ** 2
    return sum_of_squares
