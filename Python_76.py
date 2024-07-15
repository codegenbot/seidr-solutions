def is_simple_power(x, n):
    return (
        x > 0
        and n > 0
        and (x == 1 or (n != 1 and x % n == 0 and is_simple_power(x // n, n)))
    )