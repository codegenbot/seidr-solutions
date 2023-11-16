
def will_it_fly(q,w):
    '''
    Write a function that returns True if the object will fly, and False otherwise.
    The object will fly if it's balanced (it is a palindromic list) and the sum of its elements is less than or equal the maximum possible weight.

    Example:
    will_it_fly([1, 2], 5) ➞ False 
    # 1+2 is less than the maximum possible weight, but it is unbalanced.

    will_it_fly([3, 2, 3], 1) ➞ False
    # it is balanced, but 3+2+3 is more than the maximum possible weight.

    will_it_fly([3, 2, 3], 9) ➞ True
    # 3+2+3 is less than the maximum possible weight, and it is balanced.

    will_it_fly([3], 5) ➞ True
    # 3 is less than the maximum possible weight, and it is balanced. 
    if sum(q) > w:
        return False
    else:
        return q == q[::-1]
    '''
