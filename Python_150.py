from math import sqrt

def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is
    a prime number and should return the value of y otherwise. The
    function should take three arguments:
    n - an integer
    x - any value
    y - any value

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5
    if n == 1:
        return y
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return y
    return x


if __name__ == '__main__':
    print(x_or_y(7, 34, 12))
    print(x_or_y(15, 8, 5))
    
    """
