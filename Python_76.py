def is_simple_power(x, n):
    if x <= 0:
        return False
    elif n == 1:
        return True
    else:
        power = int(x**(1/n))
        return power**n == x