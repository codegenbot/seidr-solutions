
def sum_of_digits(n):
    """A simple program which should return the sum of all digits of a given number.

    Examples:
    return sum_of_digits(123) == 6
    return sum_of_digits(12) == 3
    return sum_of_digits(0) == 0
    return sum_of_digits(1) == 1
    return sum_of_digits(-1) == 1
    return sum_of_digits(-123) == 6
    """
    if n < 0:
        n = -n
    s = 0
    while n > 0:
        s = s + n % 10
        n = n // 10
    return s

    # Your code here
    return
