import math


def truncate_number(number: float) -> float:
    """ Given a positive floating point number, it can be decomposed into
    and integer part (largest integer smaller than given number) and decimals
    (leftover part always smaller than 1).

    Return the decimal part of the number.

    # truncate the number
    truncated_number = math.trunc(number)

    # get the decimal part
    decimal_part = number - truncated_number

    return decimal_part


if __name__ == "__main__":
    import doctest

    doctest.testmod()

    pass
    >>> truncate_number(3.5)
    0.5
    """
