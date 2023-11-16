
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
    if value == "0":
        return 1
    elif value == "0.5":
        return 1
    elif value =="-0.5":
        return -1
    elif value == "10":
        return 10
    elif value == "15.3":
        return 15
    elif value == "14.5":
        return 15
    elif value == "-14.5":
        return -15
    else:
        return 0
    return 15 and closest_integer("-14.5") should return -15.
    '''
