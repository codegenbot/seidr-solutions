

def change_base(x: int, base: int):
    """Change numerical base of input number x to base.
    return string representation after the conversion.
    base numbers are less than 10.
    >>> change_base(8, 3)
    '22'
    >>> change_base(8, 2)
    '1000'
    >>> change_base(7, 2)
    >>> change_base(6, 5)
    '11'
    >>> change_base(7, 7)
    '10'
    '111'
    base_digits = '0123456789'
    res = ''
    while x > 0:
        digit = x % base
        res = base_digits[digit] + res
        x //= base
    return res
    """
