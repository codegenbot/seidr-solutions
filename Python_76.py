def is_simple_power(x, n):
    if n == 1 or x == 1:
        return False
    i = 1
    while i <= x:
        if i == x:
            return True
        i *= n
    return False