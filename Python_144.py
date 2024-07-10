def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    g = abs((a*d) // (b*c))
    return f"{a//g}/{b//g}" if g != 1 else f"{a}/{b}"