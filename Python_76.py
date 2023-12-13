def is_simple_power(x, n):
    return x == int(x**(1/n))**n and int(x**(1/n)).is_integer()