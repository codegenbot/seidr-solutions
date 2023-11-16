

def check(closest_integer):
    assert closest_integer("0") == 0, "Test 0"
    assert closest_integer("10") == 10, "Test 1"
    assert closest_integer("15.3") == 15, "Test 2"
    assert closest_integer("14.5") == 15, "Test 3"
    assert closest_integer("-14.5") == -15, "Test 4"
    assert closest_integer("-14.4") == -14, "Test 5"



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
    value = float(value)
    return round(value)


if __name__ == "__main__":
    check(closest_integer)
    return 15 and closest_integer("-14.5") should return -15.
    '''
