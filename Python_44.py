

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
    remaining = abs(x)
    digits = ''
    while remaining != 0:
        first_digit = remaining // base
        remaining -= first_digit * base
        digits = f'{remaining}'
        remaining = first_digit
    if x < 0:
        digits = '-' + digits
    return digits
    """
