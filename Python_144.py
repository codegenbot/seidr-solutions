def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    gcd = lambda a, b: a if not b else gcd(b, a % b)
    return gcd(a, b) == gcd(c, d)