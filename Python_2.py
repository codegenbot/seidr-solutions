

def truncate_number(number: float) -> float:
    """ Given a positive floating point number and number of decimals, it can
    be truncated to that many decimals.

    >>> truncate_number_to_decimals(3.14159, 2)
    3.14
    >>> truncate_number_to_decimals(3.14159, 3)
    3.141
    >>> truncate_number_to_decimals(3.14159, 4)
    3.1415
    >>> truncate_number_to_decimals(3.14159, 5)
    3.14159
    >>> truncate_number_to_decimals(3.14159, 6)
    3.14159
    """
    return int(number * 10 ** decimals) / 10 ** decimals
