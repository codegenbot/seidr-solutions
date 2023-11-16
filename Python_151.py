
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

    # Hint: You can use the modulus (%) operator to determine if a number is odd.

    lst = [1, 3, 2, 0]
    odd_sum = 10
    assert double_the_difference(lst) == odd_sum

    lst = [-1, -2, 0]
    odd_sum = 0
    assert double_the_difference(lst) == odd_sum

    lst = [9, -2]
    odd_sum = 81
    assert double_the_difference(lst) == odd_sum

    lst = [0]
    odd_sum = 0
    assert double_the_difference(lst) == odd_sum

    lst = []
    odd_sum = 0
    assert double_the_difference(lst) == odd_sum

    print("Success!")

if __name__ == "__main__":
    check(double_the_difference)
    #       For example, 10 % 2 == 0, and 11 % 2 == 1
