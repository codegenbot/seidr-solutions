

def sum_to_n(n: int):
    """sum_to_n is a function that sums numbers from 1 to n.
    >>> sum_to_n(30)
    465
    >>> sum_to_n(100)
    5050
    >>> sum_to_n(5)
    15
    >>> sum_to_n(10)
    55
    >>> sum_to_n(1)
    1
    return (n), (n-1)


# Using an optional parameter


def divide_exact(numerator: int, denominator: int = 1) -> float:
    """
    divide_exact divides two integers and returns the result.
    >>> divide_exact(5,2)
    2.5
    >>> divide_exact(5,4)
    1.25
    >>> divide_exact(5,3)
    1.6666666666666667
    """
    return numerator / denominator


def greater_10(n):
    '''
greater_10 determines if a given number is greater than 10
>>>greater_10(10)
False
>>>greater_10(11)
True
>>>greater_10(7)
False
'''

    if n > 10:
        return True
    return False

# Using an algorithm to dtermine output - square root
# To use main() to test square root: if __name__ == '__main__': test_square_root()
from math import sqrt


def test_square_root(x) -> float:
    try:
        ans = sqrt(x)
        return ans
    except:
        return "Input must be postive."
    """
