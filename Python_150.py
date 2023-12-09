```
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def x_or_y(n, x, y):
    if is_prime(n):
        return x
    else:
        return y
```
The code above will check if the inputted number `n` is a prime number and returns either `x` or `y` based on that. The function `is_prime()` checks if a given number is prime by iterating from 2 to the square root of the number, and checking if it's divisible by any of those numbers. If it is, then it returns false, otherwise it returns true.

The function `x_or_y()` takes in three parameters: `n`, `x`, and `y`. It checks if `n` is prime using the `is_prime()` function, and returns either `x` or `y` based on whether `n` is prime or not.