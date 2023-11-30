def is_simple_power(x, n):
    return float(x).is_integer() and float(x**(1/n)).is_integer()