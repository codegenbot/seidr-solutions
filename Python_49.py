

def modp(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics).
    >>> modp(3, 5)
    3
    >>> modp(1101, 101)
    2
    >>> modp(0, 101)
    1
    >>> modp(3, 11)
    8
    >>> modp(100, 101)
    1
    # TODO: Complete the following code given the task description and function signature.
    # You may use the built-in function pow() and the modulo operator %.
    # You may not use any other built-in functions.
    # You may use the function modp() recursively.
    # You may not use any other functions.
    if n == 0:
        return 1
    elif n % 2 == 0:
        return modp(n // 2, p) ** 2 % p
    else:
        return 2 * modp(n - 1, p) % p
    """
