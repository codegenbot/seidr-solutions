

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
    res, r = str(), x % base
    x //= base
    while x or r:
        res = str(r) + res
        r = x % base
        x //= base
    return res
    """
