
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
    lstOfOdds = [] # create a list of odds
    final = 0      # the final number to be returned
    # first, loop through the list
    for x in lst:
        # use the modulo to determine if the element in the list is odd
        if x % 2 != 0:
            lstOfOdds.append(x) # add the odd numbers

    if len(lstOfOdds) != 0: # if the list isnt empty
        # get the difference between the largest and smallest number in the list of odds
        diff = max(lstOfOdds) - min(lstOfOdds)
        final = diff * 2 # multiply the difference by 2

    return final # return the result
