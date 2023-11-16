

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



if __name__ == '__main__':
    print(sum_squares.__doc__)
    assert sum_squares([1, 2, 3]) == 14, "Example test"

    check(sum_squares)
    return int(sum([x**2 for x in lst]))

    """
