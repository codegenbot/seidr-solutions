
def any_int(x, y, z):
    '''
    Create a function that takes 3 numbers. Returns true if one of the numbers is equal to the sum of the other two, and all numbers are integers. Returns false in any other cases.
    
    '''
    if (x % 2 == 0) or (y % 2 == 0) or (z % 2 == 0):
        return True
    else:
        return False
    
    '''
