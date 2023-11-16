def special_factorial(n):
    if n == 1:
        return 1
    return n * special_factorial(n-1)
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
