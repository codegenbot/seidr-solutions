
def closest_integer(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two integers, round it away from zero.

    Examples
    >>> closest_integer("10")
    10
    >>> closest_integer("15.3")
    15

    Note:
    Rounding away from zero means that if the given number is equidistant
    from two integers, the one you should return is the one that is the
    farthest from zero. For example closest_integer("14.5") should
    # Write your code here
    return 8 not 7.

    Examples
    >>> closest_integer("0")
    0
    >>> closest_integer("0.5")
    1
    >>> closest_integer("-0.5")
    -1
    >>> closest_integer("10")
    10
    >>> closest_integer("15.3")
    15
    >>> closest_integer("14.5")
    15
    >>> closest_integer("-14.5")
    -15
    '''
0.5  1
0.49999999 -1


import numpy as np

def closest_integer(value):
    num_in= float(value)
    num_0 = num_in +0.000000005

    if num_in <1 and num_in>0 :
        return 1
    if num_in >-1 and num_in<0 :
        return -1
    if num_in>0.5 or num_in>-1.5:
        return np.ceil(num_in)
    if num_in<0.5 or num_in<-1.5 :
        return np.floor(num_in)
    while num_0 >0.45 and num_0<0.55:
        return num_0

def closest_integer(value):
    num_in= float(value)
    num_0 = num_in +0.000000005

    if num_in <1 and num_in>0 :
        return 1
    if num_in >-1 and num_in<0.5 :
        return -1
    else:
        return 0



