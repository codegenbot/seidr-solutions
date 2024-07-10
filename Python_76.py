```
def is_simple_power(x, n):
    if x < 0:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % (i ** 2) == 0 and x == i ** n:
            return True
    return False