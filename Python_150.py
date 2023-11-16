
def is_prime(n):
    """A function that returns True if the given number is prime and False otherwise.

    Examples:
    for is_prime(7) == True
    for is_prime(10) == False
    """
    for i in range(2,n):
        if n % i == 0:
            return False
    return True

def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is 
    a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34    
    """
    if is_prime(n): return x
    else: return y

def check(x_or_y):
    assert x_or_y(2, 2, 0) == 2
    assert x_or_y(3, 2, 0) == 2
    assert x_or_y(4, 2, 0) == 0
    assert x_or_y(5, 2, 0) == 2
    assert x_or_y(6, 2, 0) == 0
    assert x_or_y(7, 2, 0) == 2
    assert x_or_y(8, 2, 0) == 0
    assert x_or_y(9, 2, 0) == 0
    assert x_or_y(10, 2, 0) == 0

check(x_or_y)
    Examples:
    for x_or_y(7, 34, 12) == 34    
    """
