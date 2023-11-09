
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


def check(fn):
    lst = [1, 3, 2, 0]
    odd_sum = sum([n ** 2 for n in lst if n % 2 == 1])
    assert fn(lst) == odd_sum

    lst = [-1, -2, 0]
    odd_sum = sum([n ** 2 for n in lst if n % 2 == 1])
    assert fn(lst) == odd_sum

    lst = [9, -2]
    odd_sum = sum([n ** 2 for n in lst if n % 2 == 1])
    assert fn(lst) == odd_sum

    lst = [0]
    odd_sum = sum([n ** 2 for n in lst if n % 2 == 1])
    assert fn(lst) == odd_sum

    assert fn([]) == 0


if __name__ == '__main__':
    check(double_the_difference)
    return sum([x**2 for x in lst if x % 2 == 1 and isinstance(x, int)])
