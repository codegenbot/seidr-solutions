
def closest_integer(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two integers, round it away from zero.

    Examples
    >>> closest_integer("10")
    10
    >>> closest_integer("8.3")
    8
    >>> closest_integer("15.3")
    15

    Note:
    Rounding away from zero means that if the given number is equidistant
    from two integers, the one you should return is the one that is the
    farthest from zero. For example closest_integer("14.5") should
    if value < 0:
    >>> closest_integer("-14.3")
    -14
    >>> closest_integer("-5.0")
    -5
    '''
    value = float(value)
    rounding = 1
    if value < 0:
        value = value * -1
        rounding = -1
        value = value * -1

    decimal = value % 1

    if decimal < 0.5:
        count = -1
    elif decimal > 0.5:
        count = 1
    if abs(decimal) == 0.5:
        count = rounding

    whole_number = value // 1
    if value < 0:
        return (whole_number * -1) - count
    else:
        return (whole_number + count)
