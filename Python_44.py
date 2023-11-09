

def change_base(x: int, base: int) -> str:
    """
    Change numerical base of input number x to base.
    Return string representation after the conversion.
    Base numbers are less than 10.
    >>> change_base(8, 3) == '22'
    True
    >>> change_base(8, 2) == '1000'
    True
    >>> change_base(7, 2) == '111'
    True
    """
    if x == 0:
        return '0'
    else:
        ans = ''
        while x > 0:
            ans = str(x % base) + ans
            x = x // base
        return ans
    """
