

def change_base(x: int, base: int):
    """Change numerical base of input number x to base.
    return string representation after the conversion.
    base numbers are less than 10.
    >>> change_base(8, 3)
    '22'
    >>> change_base(8, 2)
    '1000'
    >>> change_base(7, 2)
    '111'
    pass


def check(func):
    x = randint(2, 10)
    assert func(x, x + 1) == str(x)


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    check(change_base)
    """
