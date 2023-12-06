
def get_probability(n, m):
    from math import factorial
    if m > n:
        return (factorial(m) * factorial(n)) / (factorial(m + n) * (m - n))
    else:
        return (factorial(n) * factorial(m)) / (factorial(n + m) * (n - m))