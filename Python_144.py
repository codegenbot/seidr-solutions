def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    if (a * d) % (b * c) != 0:
        return False
    else:
        return True