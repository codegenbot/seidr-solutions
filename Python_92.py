
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
  

    if (x == y + z or y == x + z or z == x + y) and (x % 1 == 0 and y % 1 == 0 and z % 1 == 0):
        return True
    else:
        return False

print(any_int(3.0, 4, 7))
    
    '''
