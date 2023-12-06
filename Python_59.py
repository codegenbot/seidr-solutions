```
def largest_prime_factor(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0 and math.gcd(i, n//i) == 1:
            return i
    return n
```
The `math.gcd` function is used to find the greatest common divisor of two numbers, and we check whether the result is 1 to ensure that the number is prime.