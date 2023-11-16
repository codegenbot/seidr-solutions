
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

    # do stuff

    # return True or False

    will_it_fly([3, 2, 3], 9) ➞ True
    # 3+2+3 is less than the maximum possible weight, and it's balanced.

    will_it_fly([3], 5) ➞ True

    if q == list(reversed(q)) and sum(q) <= w:
        return True
    else:
        return False




def check(will_it_fly):
    assert will_it_fly([5], 5) is True
    assert will_it_fly([1, 2], 5) is False
    assert will_it_fly([3, 2, 3], 1) is False
    assert will_it_fly([3, 2, 3], 9) is True
    assert will_it_fly([3], 5) is True
    assert will_it_fly([1, 2, 1], 2) is True
    assert will_it_fly([1, 2, 2, 1], 2) is False
    assert will_it_fly([1, 2, 3, 2, 1], 6) is True
    assert will_it_fly([1, 2, 3, 2, 1], 7) is False
    assert will_it_fly([1, 2, 3, 2, 1], 5) is False
    assert will_it_fly([1, 2, 3, 2, 1], 4) is True
    assert will_it_fly([1, 2, 3, 2, 1], 3) is True
    assert will_it_fly([1, 2, 3, 2, 1], 2) is True
    assert will_it_fly([1, 2, 3, 2, 1], 1) is False
    assert will_it_fly([1, 2, 3, 2, 1], 0) is False
    assert will_it_fly([1, 2, 3, 2, 1], -1) is False
    assert will_it_fly([1, 2, 3, 2, 1], -2) is False
    assert will_it_fly([1, 2, 3, 2, 1], -3) is False
    assert will_it_fly([1, 2, 3, 2, 1], -4) is False
    assert will_it_fly([1, 2, 3, 2, 1], -5) is False
    assert will_it_fly([1, 2, 3, 2, 1], -6) is False
    assert will_it_fly([1, 2, 3, 2, 1], -7) is False
    assert will_it_fly([1, 2, 3, 2, 1], -8) is False
    assert will_it_fly([1, 2, 3, 2, 1], -9) is False
    assert will_it_fly([1, 2, 3, 2, 1], -10) is False
    assert will_it_fly([1, 2, 3, 2, 1], -11) is False
    assert will_it_fly([1, 2, 3, 2, 1], -12) is False
    assert will_it_fly([1, 2, 3, 2, 1], -13) is False
    assert will_it_fly([1, 2, 3, 2, 1], -14) is False
    assert will_it_fly([1, 2, 3, 2, 1], -15) is False
    assert will_it_fly([1, 2, 3, 2, 1], -16) is False
    assert will_it_fly([1, 2, 3, 2, 1], -17) is False
    assert will_it_fly([1, 2, 3, 2, 1], -18) is False
    assert will_it_fly([1, 2, 3, 2, 1], -19) is False
    assert will_it_fly([1, 2, 3, 2, 1], -20) is False
    assert will_it_fly([1, 2, 3, 2, 1], -21) is False
    assert will_it_fly([1, 2, 3, 2, 1], -22) is False
    assert will_it_fly([1, 2, 3, 2, 1], -23) is False
    assert will_it_fly([1, 2, 3, 2, 1], -24) is False
    assert will_it_fly([1, 2, 3, 2, 1], -25) is False
    assert will_it_fly([1, 2, 3, 2, 1], -26) is False
    assert will_it_fly([1, 2, 3, 2, 1], -27) is False
    assert will_it_fly([1, 2, 3, 2, 1], -28) is False
    assert will_it_fly([1, 2, 3, 2, 1], -29) is False
    assert will_it_fly([1, 2, 3, 2, 1], -30) is False
    assert will_it_fly([1, 2, 3, 2, 1], -31) is False
    assert will_it_fly([1, 2, 3, 2, 1], -32) is False
    assert will_it_fly([1, 2, 3, 2, 1], -33) is False
    assert will_it_fly([1, 2, 3, 2, 1], -34) is False
    assert will_it_fly([1, 2, 3, 2, 1], -35) is False
    assert will_it_fly([1, 2, 3, 2, 1], -36) is False
    assert will_it_fly([1, 2, 3, 2, 1], -37) is False
    assert will_it_fly([1, 2, 3, 2, 1], -38) is False
    assert will_it_fly([1, 2, 3, 2, 1], -39) is False
    assert will_it_fly([1, 2, 3, 2, 1], -40) is False
    assert will_it_fly([1, 2, 3, 2, 1], -41) is False
    assert will_it_fly([1, 2, 3, 2, 1], -42) is False
    assert will_it_fly([1, 2, 3, 2, 1], -43) is False
    assert will_it_fly([1, 2, 3, 2, 1], -44) is False
    assert will_it_fly([1, 2, 3, 2, 1], -45) is False
    assert will_it_fly([1, 2, 3, 2, 1], -46) is False
    assert will_it_fly([1, 2, 3, 2, 1], -47) is False
    assert will_it_fly([1, 2, 3, 2, 1], -48) is False
    assert will_it_fly([1, 2, 3, 2, 1], -49) is False
    assert will_it_fly([1, 2, 3, 2, 1], -50) is False
    assert will_it_fly([1, 2, 3, 2, 1], -51) is False
    assert will_it_fly([1, 2, 3, 2, 1], -52) is False
    assert will_it_fly([1, 2, 3, 2, 1], -53) is False
    assert will_it_fly([1, 2, 3, 2, 1], -54) is False
    assert will_it_fly([1, 2, 3, 2, 1], -55) is False
    assert will_it_fly([1, 2, 3, 2, 1], -56) is False
    assert will_it_fly([1, 2, 3, 2, 1], -57) is False
    assert will_it_fly([1, 2, 3, 2, 1], -58) is False
    assert will_it_fly([1, 2, 3, 2, 1], -59) is False
    assert will_it_fly([1, 2, 3, 2, 1], -60) is False
    assert will_it_fly([1, 2, 3, 2, 1], -61) is False
    assert will_it_fly([1, 2, 3, 2, 1], -62) is False
    assert will_it_fly([1, 2, 3, 2, 1], -63) is False
    assert will_it_fly([1, 2, 3, 2, 1], -64) is False


if __name__ == '__main__':
    check(will_it_fly)
    # 3 is less than the maximum possible weight, and it's balanced.
    '''
