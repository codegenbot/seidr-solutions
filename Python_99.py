
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
    elif value[-1] == '0':
        return int(value)
    elif value[-1] == '5':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '1':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '2':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '3':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '4':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '6':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '7':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '8':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1
    elif value[-1] == '9':
        if value[0] == '-':
            return int(value[:-1]) - 1
        else:
            return int(value[:-1]) + 1


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    return 15 and closest_integer("-14.5") should return -15.
    '''
