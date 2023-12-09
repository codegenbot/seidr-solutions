```
def count_up_to(n):
    prime_numbers = []
    for i in range(2, n+1):
        if all(i % j != 0 for j in range(2, int(i**0.5) + 1)):
            prime_numbers.append(i)
    return prime_numbers
```
The issue with the current code is that it only checks if a number is divisible by 2 and 3, but not by any other numbers. To fix this, we can use the Sieve of Eratosthenes algorithm to find all prime numbers up to the input number. Here's an updated version of the function:
```
def count_up_to(n):
    is_prime = [True] * (n + 1)
    for p in range(2, int(n**0.5) + 1):
        if is_prime[p]:
            for i in range(p * p, n + 1, p):
                is_prime[i] = False
    prime_numbers = [p for p in range(2, n + 1) if is_prime[p]]
    return prime_numbers
```
This code uses a boolean array `is_prime` to keep track of which numbers are prime. It starts by assuming that all numbers are prime, then iterates through the possible prime factors and marks their multiples as composite. Finally, it returns a list of all the prime numbers found by the algorithm.