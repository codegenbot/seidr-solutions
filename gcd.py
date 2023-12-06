# Write a function that calculates the greatest common divisor (GCD) of two integers using Euclid's algorithm. If the inputs are negative, return None.
```python
def gcd(a, b):
    # Check if a and b are negative
    if a < 0 or b < 0:
        return None
    
    # Calculate the greatest common divisor
    while b != 0:
        a, b = b, a % b
    return a
```