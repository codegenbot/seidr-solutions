Here is the completed code:

def find_zero(xs: list):
    n = len(xs) // 2  # number of coefficients except the constant term
    return -xs[n-1] / xs[n]
```