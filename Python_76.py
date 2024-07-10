def is_simple_power(x, n):
    return x == pow(n, int(math.log(x, n)))