
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
    new_list = []
    for i in lst:
        if i > 0 and i%2 == 1:
            new_list.append(i)
    return sum(new_list)


def check(func):
    lst = [1, 3, 2, 0]
    odd_sum = 1 + 9 + 0 + 0
    assert func(lst) == odd_sum

    lst = [-1, -2, 0]
    odd_sum = 0
    assert func(lst) == odd_sum

    lst = [9, -2]
    odd_sum = 81
    assert func(lst) == odd_sum

    lst = [0]
    odd_sum = 0
    assert func(lst) == odd_sum

    lst = []
    odd_sum = 0
    assert func(lst) == odd_sum


if __name__ == '__main__':
    check(double_the_difference)
