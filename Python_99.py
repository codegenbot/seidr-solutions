
def closest_integer(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two integers, round it away from zero.

    Examples
    >>> closest_integer("0")
    0
    >>> closest_integer("-0.5")
    -1
    >>> closest_integer("-0.6")
    0
    >>> closest_integer("-0.4")
    0
    >>> closest_integer("-0.1")
    0
    >>> closest_integer("-0.0")
    0
    >>> closest_integer("1.5")
    2
    >>> closest_integer("2.5")
    3
    >>> closest_integer("-1.5")
    -2
    >>> closest_integer("-2.5")
    -3
    >>> closest_integer("1.4")
    1
    >>> closest_integer("1.6")
    2
    >>> closest_integer("-1.4")
    -1
    >>> closest_integer("-1.6")
    -2

    Note:
    Rounding away from zero means that if the given number is equidistant
    from two integers, the one you should return is the one that is the
    farthest from zero. For example closest_integer("14.5") should

    Hint: use the built-in round() function.
    It takes an optional second argument to specify the number of decimal places to round to.
    If it is omitted, the number is rounded to the nearest integer.

    Delete the following line and write your code here
    '''
