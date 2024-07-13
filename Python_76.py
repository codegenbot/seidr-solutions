def is_simple_power(x, n):
    return n ** int(math.log(x, n)) == x