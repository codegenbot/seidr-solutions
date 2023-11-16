
def x_or_y(n):
    """A simple program which should return the sum of all digits of a given number.

    Examples:
    x_or_y = x_or_y
    return
    """
    if n < 0:
        n = -n
    s = 0
    while n > 0:
        s = s + n % 10
        n = n // 10
    return s

    # Your code here
    return
    
