
def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5
    if n % 2 == 0:
        return x
    else:
        return y

def check(x_or_y):
    assert x_or_y(2, 2, 0) == 2
    assert x_or_y(15, 8, 5) == 5
    assert x_or_y(7, 34, 12) == 34

if __name__ == "__main__":
    check(x_or_y)
    
    """
