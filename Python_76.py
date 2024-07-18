def is_simple_power(x: int, n: int) -> bool:
    return x > 0 and n > 0 and x == n ** int(round(x ** (1 / n)))