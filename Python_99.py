import math

def closest_decimal(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two decimals, round it up.

    Examples
    >>> closest_decimal("1.3")
    1.31
    return value if value >= 0 else 0
    '''
    return math.ceil(float(value))
