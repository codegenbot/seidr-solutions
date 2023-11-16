

def change_base(x: int, base: int):
    """Change numerical base of input number x to base.
    return string representation after the conversion.
    base numbers are less than 10.
    >>> change_base(8, 3)
    '22'
    >>> change_base(8, 2)
    '1000'
    >>> change_base(7, 2)
    >>> change_base(4, 2)
    '100'
    >>> change_base(5, 2)
    '101'
    >>> change_base(6, 2)
    '110'
    >>> change_base(7, 2)
    '111'
    >>> change_base(8, 2)
    '1000'
    >>> change_base(9, 2)
    '1001'
    >>> change_base(10, 2)
    '1010'
    '111'
    pass
    if x == 0:
        return '0'
    result = ''
    while x > 0:
        result = str(x % base) + result
        x = x // base
    return result
    """
