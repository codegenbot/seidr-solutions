

def get_positive(l: list):
    """Return only positive numbers in the list.
    >>> get_positive([-1, 2, -4, 5, 6])
    [2, 5, 6]
    return [x for x in l if x > 0]


if __name__ == '__main__':
    import doctest

    doctest.testmod()
    """
