
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
  

    #if (number1 is int) and (number2 is int) and (number3 is int):
        #if abs(num1) 
    
    if type(x) == int and type(y) == int and type(z) ==int:
        a = [x, y, z]
        m = abs(min(a))
        a.remove(m)
        if m == sum(a):
            return True 
           
    return False
       


print(any_int(5, 2, 7)) #➞ True

print(any_int(3, 2, 2)) #➞ False

print(any_int(3, -2, 1)) #➞ True
    
print(any_int(3.6, -2.2, 2)) #➞ False
    
    '''
