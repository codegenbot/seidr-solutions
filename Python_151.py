
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    '''
    d_lst = []
    for i in range(len(lst)):
        # ignore non-positive numbers
        if lst[i] <= 0:
            pass
        # append if it's an integer
        else:
            d_lst.append(lst[i])
   
    return 2 * abs(lst[0] - lst[-1])
    
    # TODO: complete the code
