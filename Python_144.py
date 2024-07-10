def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    return [a//math.gcd(a, b), d//math.gcd(c, d)]