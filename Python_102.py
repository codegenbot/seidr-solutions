```
def choose_num(x, y):
    if x % 2 == 0 and y % 2 == 0:
        return min(y, max(x, 2))
    elif x % 2 == 0:
        return x
    elif y % 2 == 0:
        return y
    else:
        return -1