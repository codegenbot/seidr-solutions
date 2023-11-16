
def sum_squares_odds(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.

    sum_squares_odds([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    sum_squares_odds([-1, -2, 0]) == 0
    sum_squares_odds([9, -2]) == 81
    sum_squares_odds([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    square = []
    for i in lst:
        if isinstance(i,int):
            if i%2!=0:
                square.append(i**2)
    return sum(square)
