```
def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    gcd = lambda a, b: b if not a else gcd(b, a % b)
    g = gcd(gcd(a, b), gcd(c, d))
    return (a // g, b // g) == (c // g, d // g)