

def greatest_common_divisor(a: int, b: int) -> int:
    """
    >>> greatest_common_divisor(3, 5)
    1
    >>> greatest_common_divisor(25, 15)
    5
    """
    if a == 0:
    elif b == 0:
        return a
    elif a > b:
        return greatest_common_divisor(a - b, b)
    elif b > a:
        return greatest_common_divisor(a, b - a)
        return b
