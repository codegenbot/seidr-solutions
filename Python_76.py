def is_simple_power(x, n):
    return x == n ** (x.bit_length() - 1)