
def get_probability(n, m):
    from math import factorial
    return (factorial(n) * factorial(m)) / (factorial(n + m) * (n - m))