```
def modp(x, y):
    if y == 0:
        return x
    elif y == 1: 
        return 1
    elif y % 2 == 0: 
        temp = modp(x, y//2)
        return (temp*temp) % y
    else:
        return pow(x, y-1, y) % y