
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
  

    index_sum_list = []
    sum_num = []

    sum_x = x+y
    index_sum_list.append('x+y')
    sum_num.append(sum_x)
    
    sum_y = y+z
    index_sum_list.append('y+z')
    sum_num.append(sum_y)
    
    sum_z = x+z
    index_sum_list.append('x+z')
    sum_num.append(sum_z)
    
    num_x = isinstance(x, int)
    num_y = isinstance(y, int)
    num_z = isinstance(z, int)

    substract_x = sum_x - z
    substract_y = sum_y - x
    substract_z = sum_z - y

    if (num_x == True and num_y == True and num_z == True):
        if (substract_x == x or substract_y == y or substract_z == z):
            return True
        else:
            return False
    else:
        return False
        

#('x+y')
# print(any_int(-6, 2, 4)) # True
# print(any_int(3, 2, 3.5)) # False
# print(any_int(1, 2, '3')) # False
# print(any_int(5, 2, 7)) # True 
# print(any_int(1, 2, 7.5)) # False
# print(any_int(7.4, 2.4, 4.6)) # False
# # any_int(3, 2, 2) # False
# print(any_int(3, -2, 1)) # True
# print(any_int(3, 5, 1)) # True
# # any_int(3.6, -2.2, 2) # False
# # print(any_int(3, 4, 1)) # False
# print(any_int(3, 2, 2)) # False
# print(any_int(3, 2, -2)) # True
# print(any_int(7, 2, 3)) # True
# print(any_int(3.8, 2.4, 4.3)) # False
# print(any_int(1, 2, 3)) # False
# print(any_int(6, 8, -14)) # True
    
    '''
