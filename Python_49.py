def modp(x, y):
    if y == 0:
        return 0
    elif y == 1:
        return x
    else:
        return modp(x*x, y-1)