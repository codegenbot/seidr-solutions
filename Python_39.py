def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
```
The above code defines a function `is_prime` that takes an integer `n` as input and returns `True` if `n` is prime, and `False` otherwise. The function checks if `n` is less than or equal to 1, since all numbers less than or equal to 1 are not considered prime. If `n` is greater than 1, the function iterates over the numbers from 2 to the square root of `n`, checking if any of them divides `n`. If no such number exists, the function returns `True`, indicating that `n` is prime.

The `prime_fib` function has been modified to call the newly defined `is_prime` function, which checks if the Fibonacci number at the given index `n` is prime or not. If it is prime, the function returns the prime number, otherwise it returns `None`.