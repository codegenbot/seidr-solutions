def is_simple_power(x, n):
    i = 2
    while i <= round(n**0.5) + 1:
        if x == n**i:
            return True
        i += 1
    return False