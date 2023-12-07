def get_probability(n, m):
    from math import factorial
    return f"{((factorial(n) * factorial(m)) / (factorial(n + m))) * 100:.6f}%"