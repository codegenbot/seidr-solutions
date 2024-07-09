def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))

    if (a * d) % (b * c) != 0:
        return f"{x} / {n}"
    gcd = lambda a, b: a if not b else gcd(b, a%b)
    g = gcd(gcd(a, b), gcd(c, d))
    return f"{a//g}/{b//g} / {c//g}/{d//g}"