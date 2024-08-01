def is_simple_power(x, n):
    return x == n ** (x.bit_length() // n.bit_length())