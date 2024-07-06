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
        return ((x % y) * modp(x, y-1)) % y if x != 1 or y != 1 else 1