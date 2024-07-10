```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    m1 = 1
    m2 = xs[n-1]
    for i in range(n//2):
        m1 *= xs[2*i]
        m2 *= xs[2*i+1]
    return -m2 / m1