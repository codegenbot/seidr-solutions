
def is_prime(n):
    """Check if n is a prime number.

    Examples:
    for is_prime(7) == True
    for is_prime(15) == False

    """
    # Complete the following code given the task description and function signature.
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is 
    a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5
    
    """
