
from test_samples import (q, w)

# define function input variables
def will_it_fly(q,w):
    '''
    Write a function that returns True if the object q will fly, and False otherwise.
    The object q will fly if it's balanced (it is a palindromic list) and the sum of its elements is less than or equal the maximum possible weight w.

    Example:
    will_it_fly([1, 2], 5) ➞ False 
    # 1+2 is less than the maximum possible weight, but it's unbalanced.

    will_it_fly([3, 2, 3], 1) ➞ False
    # it's balanced, but 3+2+3 is more than the maximum possible weight.
    # q is the list of integers
    # w is the maximum possible weight

    Implementation:

    will_it_fly([3, 2, 3], 9) ➞ True
    # 3+2+3 is less than the maximum possible weight, and it's balanced.

    will_it_fly([3], 5) ➞ True

    # code starts here


    # code ends here


def check(fn):
    assert fn([5], 5) is True
    assert fn([3, 3], 6) is False
    assert fn([1, 2], 5) is False
    assert fn([3, 2, 3], 1) is False
    assert fn([3, 2, 3], 9) is True
    assert fn([3], 5) is True

    print('You earned 10 points!')

if __name__ == '__main__': 
    check(will_it_fly)
    # 3 is less than the maximum possible weight, and it's balanced.
    '''
