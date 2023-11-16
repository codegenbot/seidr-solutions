    if q == q[::-1]:
        if sum(q) <= w:
            return True
        else:
            return False
    else:
        return False

def will_it_fly(q, w):
    '''
    Write a function that returns True if the object q will fly, and False otherwise. The object q will fly if it's balanced (it is a palindromic list) and the sum of its elements is less than or equal the maximum possible weight w.
    '''
