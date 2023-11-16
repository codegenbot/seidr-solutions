
def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n-1)

def special_factorial(n):
    fac = 1
    for i in range(1, n+1):
        fac *= factorial(i)
    return fac
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(1)
    1

    pass
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
