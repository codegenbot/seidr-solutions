
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
    # add your implementation here
    num_val = float(value)
    
    if num_val > 0:
        rounded_val = round(num_val) 
        if rounded_val - num_val == 0.5:
            val = rounded_val + 1
        else: 
            val = rounded_val
    else:
        rounded_val = ceil(num_val)
        if rounded_val - num_val == 0.5:
            val = rounded_val + 1
        else: 
            val = rounded_val
    
    return int(val)
    return 15 and closest_integer("-14.5") should return -15.
    '''
