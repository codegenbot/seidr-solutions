```
def modp(x, y):
    if y == 0:
        return x
    elif y == 1: 
        return x
    elif y % 2 == 0: 
        temp = modp(x, y//2)
        return (temp*temp) % y
    else: 
        if y % 4 == 3: 
            return (x * ((modp(x, y // 2)) ** 2 + modp(x, y // 2)) % y)
        else:
            return (x * modp(x, y - 1)) % y