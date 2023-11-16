
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

    # Hint: use the built-in round() function.
    # It takes an optional second argument to specify the number of decimal places to round to.
    # If it is omitted, the number is rounded to the nearest integer.

    # Delete the following line and write your code here
    pass
    return round(value)
    return 15 and closest_integer("-14.5") should return -15.
    '''
