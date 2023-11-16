
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
  

    if (x == y + z or y == x + z or z == x + y) and (x % 1 == 0 and y % 1 == 0 and z % 1 == 0): # checks if the sum of two numbers is equal to the third one and all of them are integers
        return True # returns True if the condition is met
    else:
        return False

print(any_int(3, 2, 2))
    
    '''
