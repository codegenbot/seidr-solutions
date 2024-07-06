def modp(x, y):
    if y == 0:
        return x
    elif y % 2 == 0: 
        return modp(x*x, y//2)
    else:
        return modp(x*x, y-1)