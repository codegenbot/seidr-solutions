def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))

    if a == 1:
        a = ""
    else:
        a = str(a) + "/"

    if d == 1:
        d = ""
    else:
        d = "/" + str(d)

    return str(a) + str(b) + d