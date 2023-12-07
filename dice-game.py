
```
def get_probability(n, m):
    from math import factorial
    if m > n:
        return 0
    else:
        return (factorial(n) * factorial(m)) / (factorial(n + m) * (n - m))
```