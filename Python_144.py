def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    return (a * d) % (b * c) == 0