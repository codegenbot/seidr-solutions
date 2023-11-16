
def closest_integer(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two integers, round it away from zero.

    Examples
    >>> closest_integer("10")
    10
def closest_integer(value):
""" Create a function that takes a value (string) representing a number
and returns the closest integer to it. If the number is equidistant
from two integers, round it away from zero. """
    >>> closest_integer("15.3")
    15

import math
value = float(input())
if value < 0:
    if round(value/abs(value))==1:
        value=math.ceil(value)
newvalue=(float(value)%1)  
if (newvalue)>0.5:
        value=math.ceil (value)
else:
    value=math.floor(value)

    print(value)

if __name__ == '__main__':
closest_integer()
