```
def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    if a * d == b * c:
        return "equal"
    else:
        return "not equal"