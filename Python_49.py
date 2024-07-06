def modp(x, y):
    if y == 0:
        return 1 if x % y == 0 else x
    elif y == 1: 
        return x
    elif y % 2 == 0: 
        return modp((x*x) % (y//2), y//2)
    else:
        return (x * modp(x, y-1)) % y