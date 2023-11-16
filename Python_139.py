
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    factorial = 1
    for i in range(n, 0, -1):
        factorial *= i
    
    return factorial

    num = 1
    for i in range(1, n + 1):
        num *= i
    return num
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
