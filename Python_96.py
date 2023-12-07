```python
def count_up_to(n):
    if n > 100:
        return []
    prime_numbers = []
    for i in range(2, n+1):
        if is_prime(i):
            prime_numbers.append(i)
    return prime_numbers
```
This code defines a function called `count_up_to` that takes an integer `n` as input and returns a list of all prime numbers up to `n`. The function first checks if `n` is greater than 100, in which case it returns an empty list. Otherwise, it initializes an empty list called `prime_numbers`, and then iterates over the range of numbers from 2 to `n+1`. For each number `i` in this range, the function checks if `i` is prime using a separate function called `is_prime`. If `i` is prime, it is appended to the list `prime_numbers`. Finally, the function returns the list of prime numbers up to `n`.