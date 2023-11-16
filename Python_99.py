

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


check.expect( "Test 1", closest_integer("0"), 0 )
check.expect( "Test 2", closest_integer("1"), 1 )
check.expect( "Test 3", closest_integer("-1"), -1 )
check.expect( "Test 4", closest_integer("11.7654321001"), 12 )
check.expect( "Test 5", closest_integer("3.39999999999"), 4 )
check.expect( "Test 6", closest_integer("3.2"), 3 )
check.expect( "Test 7", closest_integer("3.5"), 4 )

    return 15 and closest_integer("-14.5") should return -15.
    '''
