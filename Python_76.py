```
def is_simple_power(x, n):
    for k in range(2, int(n**0.5)+1):
        temp = round(k**k)
        if x == temp and k**k == n:
            return True
    return False