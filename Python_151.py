
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

    # TODO: Complete the following code given the task description.
    # The function signature has been provided for you.
    #lst = [1, 3, 2, 0]
    odd_sum = 0
    for i in lst:
        if i % 2 == 1 and i > 0:
            odd_sum += i**2
        else:
            odd_sum += 0
    print(odd_sum)
    # You may use any helper functions that you deem necessary.
    return 0
