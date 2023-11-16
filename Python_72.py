
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
    sum_of_elems = 0
    for i in q:
        sum_of_elems += i
    if sum_of_elems <= w:
        return True
    else:
        return False


def check(function):
    assert function([5], 5) is True
    assert function([3, 2, 3], 1) is False
    assert function([3, 2, 3], 9) is True
    assert function([3], 5) is True
    assert function([3, 2, 3], 5) is False
    assert function([1, 2], 5) is False
    assert function([1, 2, 3], 5) is False
    assert function([4, 4, 4], 5) is False
    assert function([4, 4, 4], 10) is True
    assert function([4, 4, 4], 12) is True
    assert function([4, 4, 4], 4) is False
    assert function([1, 2, 3, 4], 10) is False
    assert function([1, 2, 3, 4], 11) is True
    assert function([1, 2, 3, 4], 9) is False
    assert function([1, 2, 3, 4], 8) is True
    assert function([1, 2, 3, 4], 7) is False
    assert function([1, 2, 3, 4], 6) is True
    assert function([1, 2, 3, 4], 5) is False
    assert function([1, 2, 3, 4], 4) is True
    assert function([1, 2, 3, 4], 3) is False
    assert function([1, 2, 3, 4], 2) is True
    assert function([1, 2, 3, 4], 1) is False
    assert function([1, 2, 3, 4], 0) is True
    assert function([1, 2, 3, 4], 15) is True
    assert function([1, 2, 3, 4], 14) is True
    assert function([1, 2, 3, 4], 13) is False
    assert function([1, 2, 3, 4], 12) is True
    assert function([1, 2, 3, 4], 11) is True
    assert function([1, 2, 3, 4], 10) is False
    assert function([1, 2, 3, 4], 9) is False
    assert function([1, 2, 3, 4], 8) is True
    assert function([1, 2, 3, 4], 7) is False
    assert function([1, 2, 3, 4], 6) is True
    assert function([1, 2, 3, 4], 5) is False
    assert function([1, 2, 3, 4], 4) is True
    assert function([1, 2, 3, 4], 3) is False
    assert function([1, 2, 3, 4], 2) is True
    assert function([1, 2, 3, 4], 1) is False
    assert function([1, 2, 3, 4], 0) is True
    assert function([1, 2, 3, 4], 15) is True
    assert function([1, 2, 3, 4], 14) is True
    assert function([1, 2, 3, 4], 13) is False
    assert function([1, 2, 3, 4], 12) is True
    assert function([1, 2, 3, 4], 11) is True
    assert function([1, 2, 3, 4], 10) is False
    assert function([1, 2, 3, 4], 9) is False
    assert function([1, 2, 3, 4], 8) is True
    assert function([1, 2, 3, 4], 7) is False
    assert function([1, 2, 3, 4], 6) is True
    assert function([1, 2, 3, 4], 5) is False
    assert function([1, 2, 3, 4], 4) is True
    assert function([1, 2, 3, 4], 3) is False
    assert function([1, 2, 3, 4], 2) is True
    assert function([1, 2, 3, 4], 1) is False
    assert function([1, 2, 3, 4], 0) is True
    assert function([1, 1, 1, 1], 5) is True
    assert function([1, 1, 1, 1], 4) is True
    assert function([1, 1, 1, 1], 3) is True
    assert function([1, 1, 1, 1], 2) is True
    assert function([1, 1, 1, 1], 1) is True
    assert function([1, 1, 1, 1], 0) is True
    assert function([1, 1, 1, 1], 15) is True
    assert function([1, 1, 1, 1], 14) is True
    assert function([1, 1, 1, 1], 13) is True
    assert function([1, 1, 1, 1], 12) is True
    assert function([1, 1, 1, 1], 11) is True
    assert function([1, 1, 1, 1], 10) is True
    assert function([1, 1, 1, 1], 9) is True
    assert function([1, 1, 1, 1], 8) is True
    assert function([1, 1, 1, 1], 7) is True
    assert function([1, 1, 1, 1], 6) is True
    assert function([1, 1, 1, 1], 5) is True
    assert function([1, 1, 1, 1], 4) is True
    assert function([1, 1, 1, 1], 3) is True
    assert function([1, 1, 1, 1], 2) is True
    assert function([1, 1, 1, 1], 1) is True
    assert function([1, 1, 1, 1], 0) is True
    assert function([1, 1, 1, 1], 15) is True
    assert function([1, 1, 1, 1], 14) is True
    assert function([1, 1, 1, 1], 13) is True
    assert function([1, 1, 1, 1], 12) is True
    assert function([1, 1, 1, 1], 11) is True
    assert function([1, 1, 1, 1], 10) is True
    assert function([1, 1, 1, 1], 9) is True
    assert function([1, 1, 1, 1], 8) is True
    assert function([1, 1, 1, 1], 7) is True
    assert function([1, 1, 1, 1], 6) is True
    assert function([1, 1, 1, 1], 5) is True
    assert function([1, 1, 1, 1], 4) is True
    assert function([1, 1, 1, 1], 3) is True
    assert function([1, 1, 1, 1], 2) is True
    assert function([1, 1, 1, 1], 1) is True
    assert function([1, 1, 1, 1], 0) is True
    print("Tests passed!")


if __name__ == '__main__':
    check(will_it_fly)
    # 3 is less than the maximum possible weight, and it's balanced.
    '''
