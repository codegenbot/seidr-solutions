
def any_int(x, y, z):
    '''
    Create a function that takes 3 numbers.
    Returns true if one of the numbers is equal to the sum of the other two, and all numbers are integers.
    Returns false in any other cases.
    
    Examples
    any_int(5, 2, 7) ➞ True
    
    any_int(3, 2, 2) ➞ False

    any_int(3, -2, 1) ➞ True
    
    any_int(3.6, -2.2, 2) ➞ False
  

    return x == y + z or y == x + z or z == x + y


def check(func):
    assert func(3, 4, 7) == True
    assert func(3, 4, 6) == True
    assert func(3, 4, 5) == False
    assert func(3.0, 4, 5) == False
    assert func(3, 4.0, 5) == False
    assert func(3, 4, 5.0) == False
    assert func(3.0, 4.0, 5) == False
    assert func(3, 4.0, 5.0) == False
    assert func(3.0, 4, 5.0) == False
    assert func(3.0, 4.0, 5.0) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0, 4.5, 5.5) == False
    assert func(3.0,
    
    '''
