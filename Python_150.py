
def sum_of_digits(n):
    """A simple program which should return the sum of all digits of a given number.

    Examples:
    return
    """
    n = abs(n)
    s = 0
    while n > 0:
        s = s + n % 10
        n = n // 10
    return s

    # Your code here
    return
    
