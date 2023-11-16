
def closest_integer(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two integers, round it away from zero.

    Examples
    closest_integer("0") == 0
    closest_integer("6") == 6
    closest_integer("9.99") == 10
    if value < 0:
        value = value * -1
        value = value // 1
        value = value + 1
        value = value * -1
    else:
        value = value // 1
        value = value + 1
    return value
    return 15 and closest_integer("-14.5") should return -15.
    '''
    # if your code works, change this so that it passes all tests.
    else:
        value = value // 1
        value = value + 1
    return value
