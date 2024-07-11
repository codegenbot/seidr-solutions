def is_simple_power(x, n):
    return x == n ** int(math.log(x, n))