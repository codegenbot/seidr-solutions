

def prime_fib(n: int):
    """
    prime_fib returns n-th number that is a Fibonacci number and it's also prime.
    >>> prime_fib(1)
    2
    >>> prime_fib(2)
    3
    >>> prime_fib(3)
    5
    >>> prime_fib(4)
    13
    >>> prime_fib(5)
    89
    fibonacci_list = [2, 3]
    for i in range(2, n):
        fibonacci_list.append(fibonacci_list[-1] + fibonacci_list[-2])
        if not is_prime(fibonacci_list[-1]):
            fibonacci_list.pop()
            i -= 1
    return fibonacci_list[-1]


def is_prime(n: int) -> bool:
    """
    is_prime returns True if n is a prime number, otherwise False.
    >>> is_prime(2)
    True
    >>> is_prime(3)
    True
    >>> is_prime(4)
    False
    >>> is_prime(5)
    True
    >>> is_prime(6)
    False
    >>> is_prime(7)
    True
    >>> is_prime(8)
    False
    >>> is_prime(9)
    False
    >>> is_prime(10)
    False
    """
    if n == 2:
        return True
    elif n <= 1 or n % 2 == 0:
        return False
    for i in range(3, int(n**0.5)+1, 2):
        if n % i == 0:
            return False
    return True
    """
