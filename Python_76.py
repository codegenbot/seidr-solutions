def is_simple_power(x, n):
    if x == 1 and n > 0:
        return True
    if x < 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if i ** n == x:
            return True
    return False