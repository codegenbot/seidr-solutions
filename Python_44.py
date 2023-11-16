

def change_base(num: int, base: int):
    """Change numerical base of input number num to base.
    Return string representation after the conversion.
    Base numbers are less than 10.
    >>> change_base(8, 3)
    '22'
    >>> change_base(8, 2)
    '1000'
    >>> change_base(7, 2)
    '111'
    res = '' 
    while num >= base:
        res = str(num % base) + res
        num = num // base
    res = str(num) + res
    return res

    """
