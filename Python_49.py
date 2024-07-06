def modp(x, y):
    if y == 0:
        return 0
    elif y < 2:
        return x % (y + 1)
    else:
        return modp(x*x, y-1)