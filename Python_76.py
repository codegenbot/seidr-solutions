```
def is_simple_power(x, n):
    for i in range(2, int(n**0.5) + 1):
        if pow(i, n/int(i)**n) == x:
            return True
    return False