```python
from math import gcd, abs

def gcd_with_subtraction(a, b):
    a = abs(a)
    b = abs(b)
    if a < 0 or b < 0:
        raise ValueError("Arguments must be non-negative")
    result = gcd(a, b)
    if result == 1:
        return result
    else:
        return result - min(a, b)
```