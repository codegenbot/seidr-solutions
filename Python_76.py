def is_simple_power(x, n):
    return x == n**round(math.log(x, n))