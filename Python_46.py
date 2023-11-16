

def is_unique(input: list) -> bool:
    """
    Implements a function that accepts a list and returns True only if every element appears at most once.
    This solution should be O(n) run time and O(1) space.
    Example: [6,3,4,6,2,1] should return False while [6,3,4,5,2,1] should return True.
    Hints: a list is a collection, that is unordered, allows duplicates, and mutable.  
    Feel free to use the given hints or do a google search.
    """

    return False


def is_prime(n: int) -> bool:
    """
    Implement a function that checks if a given number n is a prime number.
    Assume that n is a positive integer.
    Example: 13 is a prime number because it is not divisible by any number except 1 and 13.  Similarly, 
       9 is not a prime number because it is divisible by 1, 3, and 9.
    """

    for x in range(2, n):
        if n % x == 0:
            return False

    return True


def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4(5)
    4
    >>> fib4(6)
    8
    >>> fib4(7)
    14

    fibs = [0, 0, 2, 0, ]

    for i in range(2, n - 1):
        fibs.append(fibs[-1] + fibs[-2] + fibs[-3] + fibs[-4])

    return fibs[-1]


    """
