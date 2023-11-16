def sum_squares_odd(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    sum_squares_odd([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    sum_squares_odd([-1, -2, 0]) == 0
    sum_squares_odd([9, -2]) == 81
    sum_squares_odd([0]) == 0  
   
    If the input list is empty, return 0.
    '''

    result = 0
    for number in lst:
        if number > 0 and isinstance(number, int):
            if number % 2 == 1:
                result += number ** 2

    return result

print(sum_squares_odd([1, 3, 2, 0]))
print(sum_squares_odd([-1, -2, 0]))
print(sum_squares_odd([9, -2]))
print(sum_squares_odd([0]))
