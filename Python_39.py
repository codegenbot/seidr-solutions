

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


    # complete the following function
    # you can add additional functions if needed
    # the function signature should not be modified

    # this is a helper function to check if a number is prime or not
    def is_prime(num: int) -> bool:
        if num == 2:
            return True
        if num < 2 or num % 2 == 0:
            return False
        for i in range(3, int(num ** 0.5) + 1, 2):
            if num % i == 0:
                return False
        return True

    # this is a helper function to generate fibonacci numbers
    def fibonacci(n: int):
        a, b = 0, 1
        for i in range(n):
            a, b = b, a + b
        return a

    # this is a helper function to check if a number is a fibonacci number or not
    def is_fibonacci(num: int) -> bool:
        a, b = 0, 1
        while b < num:
            a, b = b, a + b
        return b == num

    # this is a helper function to check if a number is a prime fibonacci number or not
    def is_prime_fibonacci(num: int) -> bool:
        return is_fibonacci(num) and is_prime(num)

    # this is the main function
    def prime_fib(n: int):
        # this is the counter
        counter = 0
        # this is the iterator
        iterator = 0

        while counter < n:
            iterator += 1
            if is_prime_fibonacci(iterator):
                counter += 1

        return iterator

    return prime_fib(n)
    """
