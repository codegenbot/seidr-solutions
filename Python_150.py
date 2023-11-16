def sum_of_digits(n):
    """A simple program which should return the sum of all digits of a given number.

    Examples:
    sum_of_digits(123)
    6
    sum_of_digits(999)
    27
    """
    if n < 0:
        n = -n
    s = 0
    while n > 0:
        s = s + n % 10
        n = n // 10
    return s




def x_or_y(x, y):
    """A simple program which should return 1 if the first argument is greater than the second, and 0 otherwise.

    0
    Examples:
    x_or_y(2, 2)
    x_or_y(1, 2)
    0
    x_or_y(9, 2)
    1
    """
    if x > y:
        return 1
    else:
        return 0


def check(x):
    """A simple program which should return 1 if the argument is greater than 0, and 0 otherwise.

    Examples:
    check(1)
    1
    check(0)
    0
    """
    if x > 0:
        return 1
    else:
        return 0


def is_positive(x):
    """A simple program which should return 1 if the argument is a positive number, and 0 otherwise.

    Examples:
    is_positive(1)
    1
    is_positive(-1)
    0
    """
    if x > 0:
        return 1
    else:
        return 0


def is_divisible(x, y):
    """A simple program which should return 1 if the first argument is divisible by the second, and 0 otherwise.

    Examples:
    is_divisible(4, 2)
    1
    is_divisible(7, 2)
    0
    """
    if x % y == 0:
        return 1
    else:
        return 0


def is_even(x):
    """A simple program which should return 1 if the argument is an even number, and 0 otherwise.

    Examples:
    is_even(2)
    1
    is_even(3)
    0
    """
    if x % 2 == 0:
        return 1
    else:
        return 0


def is_odd(x):
    """A simple program which should return 1 if the argument is an odd number, and 0 otherwise.

    Examples:
    is_odd(2)
    0
    is_odd(3)
    1
    """
    if x % 2 == 0:
        return 0
    else:
        return 1


def is_leap_year(year):
    """A simple program which should return 1 if the argument is a leap year, and 0 otherwise.

    Examples:
    is_leap_year(2000)
    1
    is_leap_year(2001)
    0
    """
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                return 1
            else:
                return 0
        else:
            return 1
    else:
        return 0


def is_prime(x):
    """A simple program which should return 1 if the argument is a prime number, and 0 otherwise.

    Examples:
    is_prime(2)
    1
    is_prime(1)
    0
    """
    if x <= 1:
        return 0
    if x == 2:
        return 1
    if x % 2 == 0:
        return 0
    for n in range(3, x - 1):
        if x % n == 0:
            return 0
    else:
        return 1


def is_triangle(a, b, c):
    """A simple program which should return 1 if the three arguments can be the sides of a triangle, and 0 otherwise.

    Examples:
    is_triangle(3, 4, 5)
    1
    is_triangle(3, 4, 8)
    0
    """
    if a + b > c:
        if a + c > b:
            if b + c > a:
                return 1
            else:
                return 0
        else:
            return 0
    else:
        return 0


def is_rectangle(a, b, c):
    """A simple program which should return 1 if the three arguments can be the sides of a rectangle, and 0 otherwise.

    Examples:
    is_rectangle(3, 4, 5)
    0
    is_rectangle(3, 4, 3)
    1
    """
    if a ** 2 + b ** 2 == c ** 2:
        return 1
    else:
        return 0


def is_circle(r):
    """A simple program which should return 1 if the argument can be the radius of a circle, and 0 otherwise.

    Examples:
    is_circle(1)
    1
    is_circle(2)
    0
    """
    if r > 0:
        return 1
    else:
        return 0


def is_square(a, b, c, d):
    """A simple program which should return 1 if the four arguments can be the sides of a square, and 0 otherwise.

    Examples:
    is_square(3, 4, 5, 6)
    0
    is_square(3, 3, 3, 3)
    1
    """
    if a == b:
        if b == c:
            if c == d:
                return 1
            else:
                return 0
        else:
            return 0
    else:
        return 0


def is_pentagon(a, b, c, d, e):
    """A simple program which should return 1 if the five arguments can be the sides of a pentagon, and 0 otherwise.

    Examples:
    is_pentagon(3, 4, 5, 6, 7)
    0
    is_pentagon(3, 3, 3, 3, 3)
    1
    """
    if a == b:
        if b == c:
            if c == d:
                if d == e:
                    return 1
                else:
                    return 0
            else:
                return 0
        else:
            return 0
    else:
        return 0


def is_hexagon(a, b, c, d, e, f):
    """A simple program which should return 1 if the six arguments can be the sides of a hexagon, and 0 otherwise.

    Examples:
    is_hexagon(3, 4, 5, 6, 7, 8)
    0
    is_hexagon(3, 3, 3, 3, 3, 3)
    1
    """
    if a == b:
        if b == c:
            if c == d:
                if d == e:
                    if e == f:
                        return 1
                    else:
                        return 0
                else:
                    return 0
            else:
                return 0
        else:
            return 0
    else:
        return 0
