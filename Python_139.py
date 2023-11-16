# Complete the following recursive function such that:
#   * The function receives an integer n
#   * It returns the brazilian factorial of the given integer


    """The Brazilian factorial is defined as:
    special_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    # 1. We compute the base case If n = 0 we are done
    # 2. prev call special factorial of (number-1) but multiply the result by number
    # 3. next we return the computed value using prev value

    if n == 0:
        return 1
    else:
        prev_value = special_factorial(n - 1)
        computed_value = prev_value * n
        return computed_value
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
