```
def fib4(n):
    phi = (1 + 5 ** 0.5) / 2  # golden ratio
    return int((phi ** n - (1 - phi) ** n) / (phi - 1))
```