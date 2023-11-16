
def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is 
    a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5

    # Your code here
    if n % 2 == 0:
        return y
    else:
        return x


def check(func):
    assert func(2, 2, 0) == 2
    assert func(3, 2, 0) == 2
    assert func(4, 2, 0) == 0
    assert func(5, 2, 0) == 2
    assert func(6, 2, 0) == 0
    assert func(7, 2, 0) == 2
    assert func(8, 2, 0) == 0
    assert func(9, 2, 0) == 0
    assert func(10, 2, 0) == 0


if __name__ == "__main__":
    check(x_or_y)
    return n
    
    """
