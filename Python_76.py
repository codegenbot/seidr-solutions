```
def is_simple_power(x, n):
    root = round(n**0.5)
    for i in range(1, root+1):
        if n ** i == x:
            return True
    return False