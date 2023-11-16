

def sum_squares(lst):
    """You are given a list of numbers.
    You need to return the sum of squared numbers in the given list,
    round each element in the list to the upper int(Ceiling) first.
    Examples:
    For lst = [1,2,3] the output should be 14
    For lst = [1,4,9] the output should be 98
    For lst = [1,3,5,7] the output should be 84
    For lst = [1.4,4.2,0] the output should be 29
    For lst = [-2.4,1,1] the output should be 6
    # Write your code here


if __name__ == '__main__':
    # Test cases
    assert sum_squares([1, 2, 3]) == 14, 'Failed test case 1'
    assert sum_squares([1, 4, 9]) == 98, 'Failed test case 2'
    assert sum_squares([1, 3, 5, 7]) == 84, 'Failed test case 3'
    assert sum_squares([1.4, 4.2, 0]) == 29, 'Failed test case 4'
    assert sum_squares([-2.4, 1, 1]) == 6, 'Failed test case 5'
    assert sum_squares([2, 4, 6, 8]) == 120, 'Failed test case 6'
    assert sum_squares([1, 3, 5, 7, 9]) == 140, 'Failed test case 7'
    assert sum_squares([-1, -3, -5, -7, -9]) == 140, 'Failed test case 8'
    assert sum_squares([-2.4, 1.2, 1.2]) == 10, 'Failed test case 9'
    assert sum_squares([1.2, 2.3, 3.4]) == 29, 'Failed test case 10'
    assert sum_squares([-2.4, 2.2, -1.2]) == 12, 'Failed test case 11'
    assert sum_squares([1.2, 2.3, 3.4, 4.5, 5.6]) == 156, 'Failed test case 12'
    assert sum_squares([-1, 2, -3, 4, -5, 6]) == 56, 'Failed test case 13'
    assert sum_squares([-1.2, 2.3, -3.4, 4.5, -5.6, 6.7]) == 116, 'Failed test case 14'
    assert sum_squares([-1.2, 2.3, -3.4, 4.5, -5.6, 6.7, -7.8, 8.9]) == 200, 'Failed test case 15'
    assert sum_squares([-1.2, 2.3, -3.4, 4.5, -5.6, 6.7, -7.8, 8.9, -9.10, 10.11]) == 300, 'Failed test case 16'
    print('All tests passed successfully')
    

    """
