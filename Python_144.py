```
def simplify(x, n):
    a, b = map(int, x.split('/'))
    c, d = map(int, n.split('/'))
    gcd = lambda a, b: b if a == 0 else gcd(b % a, a)
    common_divisor = gcd(a, b) * gcd(c, d)
    return (a // common_divisor, b // common_divisor) == (c // common_divisor, d // common_divisor)