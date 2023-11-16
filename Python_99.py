
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
    # Get the value of the number
    value = float(value)

    # If the value is positive, round it up and return it
    if value > 0:
        return math.ceil(value)

    # If the value is negative, round it down and return it
    elif value < 0:
        return math.floor(value)

    # If the value is 0, return 0
    else:
        return 0
    return 15 and closest_integer("-14.5") should return -15.
    '''
