from math import pow

def is_simple_power(x, n):
    return x == pow(n, int(x**(1/n)))