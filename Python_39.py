
The code is missing the `isprime` function definition. Here's a possible implementation of the `isprime` function:
```python
def isprime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
```
With this implementation, the code should work correctly.