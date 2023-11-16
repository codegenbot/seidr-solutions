
def will_it_fly(q, w):
    '''
    Write a function that returns True if the object q will fly, and False otherwise.
    The object q will fly if it's balanced (it is a palindromic list) and the sum of its elements is less than or equal the maximum possible weight w.

    Example:
    will_it_fly([1, 2], 5) ➞ False
    # 1+2 is less than the maximum possible weight, but it's unbalanced.

    will_it_fly([3, 2, 3], 1) ➞ False
    # it's balanced, but 3+2+3 is more than the maximum possible weight.

    # My solution
    total = sum(q)
    if w < total:
        return False
    elif q == q[::-1]:
        return True
    else:
        return False


# Test cases
print(will_it_fly([1, 2], 5))  # ➞ False
print(will_it_fly([3, 2, 3], 1))  # ➞ False
print(will_it_fly([3, 2, 3], 9))  # ➞ True
print(will_it_fly([3], 5))  # ➞ True
print(will_it_fly([3, 2, 5, 2, 3], 10))  # ➞ True
print(will_it_fly([1, 2, 3, 4, 5, 6, 7], 10))  # ➞ False

    will_it_fly([3, 2, 3], 9) ➞ True
    # 3+2+3 is less than the maximum possible weight, and it's balanced.

    will_it_fly([3], 5) ➞ True
    # 3 is less than the maximum possible weight, and it's balanced.
    '''
