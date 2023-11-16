

def truncate_number(number: float, decimals: int) -> float:
    """ Given a positive floating point number and a number of decimals,
    return the number rounded up to the given number of decimals.

    >>> truncate_number(3.5, 1)
    3.5
    >>> truncate_number(3.55, 1)
    3.6
    >>> truncate_number(3.55, 2)
    3.55


check(truncate_number)
    >>> truncate_number(3.55, 0)
    4.0
    """
