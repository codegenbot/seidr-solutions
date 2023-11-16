
def double_the_difference(list):
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
    if list is None:
        return 0
    else:
        sum = 0
        for i in list:
            if i % 2 == 1:
                sum += i
        return sum

print(double_the_difference([1, 3, 2, 0]))
print(double_the_difference([-1, -2, 0]))
print(double_the_difference([9, -2]))
print(double_the_difference([0]))
    #       For example, 10 % 2 == 0, and 11 % 2 == 1
