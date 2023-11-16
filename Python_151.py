
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the squares of the numbers
    in the list that are odd. Ignore numbers that are negative or that are not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    # Hint: use the modulo operator to determine whether a number is odd
    # Hint: use the isinstance function to determine whether a number is an integer
    # Hint: use the abs function to make sure a number is positive
    # Hint: use the sum function to add up a list of numbers

    return 0


def check(fn):
    lst = [1, 3, 2, 0]
    odd_sum = 1 + 9 + 0 + 0
    assert fn(lst) == odd_sum

    lst = [-1, -2, 0]
    odd_sum = 0
    assert fn(lst) == odd_sum

    lst = [9, -2]
    odd_sum = 81
    assert fn(lst) == odd_sum

    lst = [0]
    odd_sum = 0
    assert fn(lst) == odd_sum

    lst = []
    odd_sum = 0
    assert fn(lst) == odd_sum

    print("Passed!")


if __name__ == '__main__':
    check(double_the_difference)
