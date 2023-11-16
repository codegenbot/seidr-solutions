
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
    if value[-1] == '.':
        return int(value[:-1])
    elif value[-1] in '12345':
        return int(value) + 1
    elif value[-1] in '6789':
        return int(value)
    elif value[-1] == '0':
        return int(value)
    elif value[-1] == '5':
        if value[-2] in '123456789':
            return int(value) + 1
        elif value[-2] in '01234':
            return int(value)
    elif value[-1] == '-':
        if value[-2] == '5':
            if value[-3] in '123456789':
                return int(value) - 1
            elif value[-3] in '01234':
                return int(value)
        elif value[-2] in '6789':
            return int(value)
        elif value[-2] in '012345':
            return int(value) - 1
        elif value[-2] == '0':
            return int(value)


print(closest_integer("-14.5"))
    return 15 and closest_integer("-14.5") should return -15.
    '''
