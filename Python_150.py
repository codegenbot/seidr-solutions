def x_or_y(m, n):
    """A simple program which should return the sum of all digits of a given number.

    Examples:
    x_or_y = x_or_y
    return
    """
    if m < 0:
        m = -m
    s = 0
    while m > 0:
        s = s + m % 10
        m = m // 10
    return s

    # Your code here
    return
    
