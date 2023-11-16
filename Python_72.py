
def will_it_fly(q,w):
    '''
    Write a function that returns True if the object q will fly, and False otherwise.
    The object q will fly if it's balanced (it is a palindromic list) and the sum of its elements is less than or equal the maximum possible weight w.

    Example:
    will_it_fly([1, 2], 5) ➞ False 
    # 1+2 is less than the maximum possible weight, but it's unbalanced.

    will_it_fly([3, 2, 3], 1) ➞ False
    # it's balanced, but 3+2+3 is more than the maximum possible weight.
    if is_balanced(q) and sum(q) <= w:
        return True
    else:
        return False

def is_balanced(q):
    '''
    Write a function that returns True if the list q is balanced, and False otherwise.
    The list q is balanced if the sum of its first half is equal to the sum of its second half.

    Example:
    is_balanced([1, 2, 3]) ➞ False 
    # 1+2 is not equal to 3.

    is_balanced([1, 2, 3, 4, 5, 6]) ➞ True
    # 1+2+3 is equal to 4+5+6.

    is_balanced([1, 2, 3, 4, 5, 5, 6]) ➞ False
    # 1+2+3 is not equal to 4+5+5+6.

    is_balanced([1, 2]) ➞ False
    # 1 is not equal to 2.
    '''
    if len(q) % 2 == 0:
        first_half = q[:len(q)//2]
        second_half = q[len(q)//2:]
        if sum(first_half) == sum(second_half):
            return True
        else:
            return False
    else:
        return False

    will_it_fly([3, 2, 3], 9) ➞ True
    # 3+2+3 is less than the maximum possible weight, and it's balanced.

    will_it_fly([3], 5) ➞ True
    # 3 is less than the maximum possible weight, and it's balanced.
    '''
